#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*じゃんけんゲームを作成しましょう。

0：グー　1：チョキ　2：パーとしてジャンケンゲームを作成しましょう。
CPUはランダムで上記の数字を選択します。
プレイヤーは、キーボードから数字を入力します。
プレイヤーが勝った場合は、「PLAYER WIN」として、CPUが勝った場合は、「CPU WIN」を表示し、同じなら「DRAW」を表示してください。
5回勝負を行い、結果を表示しましょう。
※例：
　5回勝負終了：何勝何分け何敗*/

int main(void)
{
    //変数宣言
    int i{};
    int player;
    int cpu;
    int win = 0;
    int draw = 0; 
    int lose = 0;
    //乱数の初期化
    srand((unsigned int)time(NULL));

   

    //playerの選択を促す
    printf("じゃんけんゲーム\n手を選択しCPUに勝利しましょう。\n0：グー　1：チョキ　2：パー\n");
    
    //勝敗の判定・結果表示(繰り返し)
    for ( i = 0; i < 5; i++)
    {
        //playerの入力
        scanf("%d", &player);
        if (player < 0 || 2 < player)
        {
            printf("入力された数値に誤りがあります\n");
            return 1;
        }
        //CPUの選択（ランダム）
        cpu = rand() % 3;

        int win1 = player - cpu;

        if (win1 == 0)
        {
            printf("%d回目　DRAW\n",i+1);
        }
        else if (win1 == -1 || win1 == 2)
        {
            printf("%d回目　YOU WIN\n",i+1);
        }
        else
        {
            printf("%d回目　CPU WIN\n",i+1);
        }
        //勝負結果を数える
       
        switch (win1)
        {
        case 0:
            draw = draw+1;
            break;
        case -1:
        case 2:
            win = win+1;
            break;
        default:
            lose = lose + 1;
            break;

        }
        
    }
    
    //5回勝負の結果表示
    printf("5回勝負終了:%d勝%d分け%d敗\n",win,draw,lose);

    return 0;
}