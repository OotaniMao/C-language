#include<stdio.h>
#pragma warning(disable:4996)

/*ある数をキーボードから入力しその数のすべての約数を表示せよ*/

int main(void)
{
    //変数宣言
    int i;
    int player;

    //キーボードから入力
    printf("約数を調べたい数値を入力してください。\n調べたい数値:");
    scanf("%d", &player);

    //約数を調べる
    for (i = 0; i < player; i++)
    {
        if (player%(i+1)==0)//入力した数字を割った余りが0の時約数
        {
            printf("%d,", i + 1);//約数を表示
        }
        
    }

    return 0;
}