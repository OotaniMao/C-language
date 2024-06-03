#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*伝統の一戦「狂人vs半神」の対決試合の結果を出しましょう。

得点はランダムで1点から5点とします。
各回で得点を表示しましょう。
9回が終わったら、それぞれの得点とどちらかが勝ったか、引き分けかを表示しましょう。*/

int main(void)
{
    //変数宣言
    int i;
    int madman_score;
    int demigod_score;
    int madman_sum = 0;
    int demigod_sum = 0;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //対決を繰り返す
    for (i = 0; i < 9; i++)
    {
        //得点（ランダム）
        madman_score = rand() % 6;
        demigod_score = rand() % 6;
        //得点表示
        printf("%d回目\n狂人 表:%d点\n半神 裏:%d点\n", i+1, madman_score, demigod_score);
        madman_sum += madman_score;
        demigod_sum += demigod_score;
    }
    //試合結果の表示
    printf("合計得点\n狂人:%d点\n半神:%d点\n",madman_sum,demigod_sum);
    if (madman_sum < demigod_sum)
    {
        printf("半神 WIN\n");
    }
    else if (madman_sum > demigod_sum)
    {
        printf("狂人 WIN\n");
    }
    else
    {
        printf("DRAW\n");
    }

    return 0;
}