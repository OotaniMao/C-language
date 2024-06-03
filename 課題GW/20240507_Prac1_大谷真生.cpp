#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*じゃんけんゲームを作成しましょう。

0：グー　1：チョキ　2：パーとしてジャンケンゲームを作成しましょう。
CPUはランダムで上記の数字を選択します。
プレイヤーは、キーボードから数字を入力します。
プレイヤーが勝った場合は、「PLAYER WIN」として、
CPUが勝った場合は、「CPU WIN」を表示し、同じなら「DRAW」を表示してください。*/
int main(void)
{
    //変数宣言
    int cpu;
    int player;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //乱数の生成
    cpu = rand() % 3;

    // キーボードからの入力を促す
    printf("じゃんけんゲーム！！\n整数を入力してCPUとじゃんけんしよう！\n0：グー　1：チョキ　2：パー\n");
    //確認用
    //printf("%d", cpu);

    printf("player : ");
    scanf("%d", &player);
    printf("CPU : %d\n", cpu);
   
    //数値の範囲設定
    if (player < 0 || 2 < player)
    {
        printf("入力された数値に誤りがあります。\n");

        return 1;
    }
    //勝敗の判定・表示
    if (player == cpu)//あいこ
    {
        printf("DRAW！\n");
    }
    else 
    {
        int win1 = player - cpu;

        if ( win1 == -1 || win1 == 1) //playerが勝利するとき
        {
            printf("PLAYER WIN!!\n");
        }
        else
        {
            printf("CPU WIN!!\n");
        }
    }

    return 0;
}