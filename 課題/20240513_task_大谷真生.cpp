#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*じゃんけんゲームを作成しましょう。

0：グー　1：チョキ　2：パーとしてジャンケンゲームを作成しましょう。
CPUはランダムで上記の数字を選択します。
プレイヤーは、キーボードから数字を入力します。
勝負の前に、それぞれの手を選択してください。
プレイヤーが勝った場合は、「PLAYER WIN」として、
CPUが勝った場合は、「CPU WIN」を表示し、同じなら「DRAW」を表示してください。*/

int main(void)
{
    //変数宣言
    int cpu;
    int player;

    // 乱数の初期化
    srand((unsigned int)time(NULL));

    // CPUの選択（ランダム）
    cpu = rand() % 3;

    // プレイヤーの選択を促す
    printf("じゃんけんゲーム！！\n数字を選んでCPUに勝とう！\n0：グー　1：チョキ　2：パー\n");
    printf("手を選択してください\n");
    scanf("%d", &player);

  
     // プレイヤーの選択を表示
    switch (player)
    {
    case 0:
        printf("あなたの選択:グー\n");
        break;

    case 1:
        printf("あなたの選択:チョキ\n");
        break;

    case 2:
        printf("あなたの選択:パー\n");
        break;

    default:
        printf("入力された数値に誤りがあります。\n");
        break;

        return 1;
    }

    //CPUの選択を表示
    switch (cpu)
    {
    case 0:
        printf("CPUの選択：グー\n");
        break;

    case 1:
        printf("CPUの選択：チョキ\n");
        break;

    case 2:
        printf("CPUの選択：パー\n");
        break;
        
    }

    // 判定・表示
    int win1 = player - cpu;

    if (win1 == 0)
    {
        printf("DRAW\n");
    }
    else if (win1 == -1 || win1 == 2)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("CPU WIN\n");
    }


    return 0;
}