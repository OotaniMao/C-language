#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*2024年5月14日演習問題2に回避行動を追加してください。

攻撃開始時（武器、魔法両方）、回避行動を追加します。
命中判定をランダムで0~30で数値を生成してください。
防御側は素早さが命中判定以上なら、攻撃を回避できます。
それ未満なら、攻撃が命中したとなり今まで通りのダメージ計算になります。*/

/*キャラクターステータス構造体を定義しましょう。
持っているメンバーは以下の通りです
名前（char[128]）
体力（int）
魔力（int）
攻撃力（int）
防御力（int）
素早さ（int）


構造体を使って、プレイヤーとCPUを作成し、構造体にそれぞれの値を代入します。

体力、魔力は18~100までとします。

攻撃力、防御力、素早さは5〜30までとします。
※数値は全てランダムです。
※敵の名前は、入力してください。


作り終えたら、プレイヤーのみ表示させ、CPUを対戦させましょう。

プレイヤーは、攻撃するか魔法で攻撃するかを選びます。
※攻撃：0　魔法：1を使用しましょう。

選択後、攻撃なら攻撃力ー防御力の値を体力を減らしてください。

魔法なら魔力ー魔力の値を体力を減らしてください。

プレイヤーが終わったら、CPUも同じことを行なってください。
※CPUはランダムで選択します。


体力が0以下になった方が負けです。

0でない場合は、体力の多い方が勝ちとなります。*/

typedef struct Status
{
    char name[128];
    int HP;//体力
    int MP;//魔力
    int ATK;//攻撃力
    int DEF;//防御力
    int AGL;//素早さ
}Status;

int main(void)
{
    //構造体を変数にする
    Status player;
    Status cpu;

    int hit_rate;//命中率

    //playerの入力
    printf("名前を入力してください。\n");
    scanf("%s", &player.name);

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //playerの能力値生成（ランダム）
    player.HP = rand() % 83 + 18;//体力
    player.MP = rand() % 83 + 18;//魔力
    player.ATK = rand() % 26 + 5;//攻撃力
    player.DEF = rand() % 26 + 5;//防御力
    player.AGL = rand() % 26 + 5;//素早さ

    //cpuの名前入力
    printf("CPUに名前をつけてください。\n");
    scanf("%s", &cpu.name);

    //cpuの能力値生成（ランダム）
    cpu.HP = rand() % 83 + 18;//体力
    cpu.MP = rand() % 83 + 18;//魔力
    cpu.ATK = rand() % 26 + 5;//攻撃力
    cpu.DEF = rand() % 26 + 5;//防御力
    cpu.AGL = rand() % 26 + 5;//素早さ

    //命中判定
    hit_rate = rand() % 30;

    //playerのstatus表示
    printf("PLAYER\n名前:%s\n体力:%d\n魔力:%d\n攻撃力:%d\n防御力:%d\n素早さ:%d\n", player.name, player.HP, player.MP, player.ATK, player.DEF, player.AGL);

    //playerの選択を促す
    printf("対戦開始！\n攻撃か魔法を選択してください。\n攻撃:0 魔法:1\n");

    //選択用変数宣言
    int player_choice;
    int cpu_choice;
    int player_atack = player.ATK - cpu.DEF;
    int player_magic = player.MP - cpu.MP;
    int cpu_atack = cpu.ATK - player.DEF;
    int cpu_magic = cpu.MP - player.MP;

    cpu_choice = rand() % 2;//cpu選択乱数生成

    scanf("%d", &player_choice);//player入力

    //数値の範囲設定
    if (cpu_choice < 0 || 1 < cpu_choice)
    {
        printf("入力された数値に誤りがあります。\n");

        return 1;
    }
    else if (player_choice < 0 || 1 < player_choice)
    {
        printf("入力された数値に誤りがあります。\n");

        return 1;
    }

    //playerの選択の判定
    if (player_choice == 0)
    {
        if (cpu.AGL >= hit_rate)
        {
            printf("%sは回避した\n%sの残り体力:%d\n", cpu.name, cpu.name, cpu.HP);
        }
        else if(cpu.AGL < hit_rate)
        {
            printf("%sの残り体力:%d\n", cpu.name, cpu.HP - player_atack);
        }
    }
    else
    {
        if (cpu.AGL >= hit_rate)
        {
            printf("%sは回避した\n%sの残り体力:%d\n", cpu.name, cpu.name, cpu.HP );
        }
        else if (cpu.AGL < hit_rate)
        {
            printf("%sの残り体力:%d\n", cpu.name, cpu.HP - player_magic);
        }
    }
    //数値がマイナスの時0にする
    if (player_atack <= 0)
    {
        player_atack = 0;
    }

    if (player_magic <= 0)
    {
        player_magic = 0;
    }

    //cpuの選択（ランダム）
    printf("CPUのターン\n");
    //cpu_choice = rand() % 2;

    //cpuの選択の判定
    if (cpu_choice == 0)
    {
        if (player.AGL >= hit_rate)
        {
            printf("%sは回避した\n%sの残り体力:%d\n", player.name, player.name, player.HP);
        }
        else if(player.AGL < hit_rate)
        {
            printf("%sの残り体力:%d\n", player.name, player.HP - cpu_atack);
        }
       
    }
    else
    {
        if (player.AGL >= hit_rate)
        {
            printf("%sは回避した\n %sの残り体力:%d\n", player.name,player.name,player.HP);
        }
        else if(player.AGL < hit_rate)
        {
            printf("%sの残り体力:%d\n", player.name, player.HP - cpu_magic);
        }
       
    }

    if (cpu_atack <= 0)
    {
        cpu_atack = 0;
    }

    if (cpu_magic <= 0)
    {
        cpu_magic = 0;
    }

    //体力の判定
    if (player.HP <= 0 || player.HP < cpu.HP)
    {
        printf("CPU WIN\n");
    }
    else if (cpu.HP <= 0 || cpu.HP < player.HP)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("DRAW\n");
    }

    return 0;
}