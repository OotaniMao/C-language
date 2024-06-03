#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*PK戦
プレイヤーとCPUで交互にキッカーとキーパーの役目を行い、5回行いましょう。
蹴る方向は、0:左　1:正面　2:右となります。
同じ方向なら止められて得点にはなりません。異なれば得点となります。
3点先に先取した方が勝ちとなります。
同点であれば、サドンデス（延長戦）となり、どちらかが多く得点を取った方が勝ちとします。
最終的に、どちらが勝ったかを表示させましょう。*/

int main(void)
{
    //変数宣言
    int player;
    int player_score = 0;
    int cpu;
    int cpu_score = 0;
    int count = 0;

    //乱数の初期化
    srand((unsigned int)time(NULL));


    //playerの入力を促す
    printf("PK戦\nプレイヤーとCPUで交互にキッカーとキーパーの役目を行います。\n蹴る方向は、0:左　1:正面　2:右です。\n");

    //繰り返し
    while (player_score < 3 && cpu_score < 3 || player_score == cpu_score)
    {
        //CPUの選択（ランダム）
        cpu = rand() % 3;

        //playerのターン
        printf("%d回目\nplayerの攻撃:", count + 1);
        scanf("%d", &player);

        //数値の範囲設定
        while (player < 0 || 2 < player)
        {
            printf("入力された数値に誤りがあります。\nplayerの攻撃:");
            scanf("%d", &player);
        }
        if (player == cpu)//キッカー
        {
            printf("防がれました\n");
        }
        else
        {
            printf("ゴール！\n");
            player_score = player_score + 1;
        }
        //cpuのターン

          //CPUの選択（ランダム）
        cpu = rand() % 3;
        printf("cpuの攻撃\nplayerは防御:");
        scanf("%d", &player);

        //数値の範囲設定
        while (player < 0 || 2 < player)
        {
            printf("入力された数値に誤りがあります。\nplayerの攻撃:");
            scanf("%d", &player);
        }
        if (player == cpu)//キーパー
        {
            printf("防ぎました\n");
        }
        else
        {
            printf("ゴールされた!\n");
            cpu_score = cpu_score + 1;
        }
        //ターン数
        count = count + 1;
        if (cpu_score == 3 && player_score == 3)//サドンデス（延長戦）
        {
            printf("延長戦（サドンデス）突入！\n");
        }

    }
    //結果表示
    if (player_score > cpu_score)//playerの勝利の時
    {
        printf("player:%d点対cpu:%d点でplayerの勝利\n", player_score, cpu_score);
    }
    else//cpuの勝利の時
    {
        printf("player:%d点対cpu:%d点でcpuの勝利\n", player_score, cpu_score);
    }


    return 0;
}