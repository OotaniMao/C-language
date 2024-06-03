#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
    //変数宣言
    int MAX;
    int a;
    int b;
    int c;
    int d;
    //キーボードから入力
    printf("整数を４つ入力し、最大値を表示させてください\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("d = ");
    scanf("%d", &d);
    //最大値を仮定
    MAX = a;
    //最大値を判定
        if (MAX < b)
        {
            MAX = b;
        }
        if (MAX < c)
        {
            MAX = c;

        }
        if (MAX < d)
        {
            MAX = d;
        }
        //最大値表示
        printf("最大値は%dです\n", MAX);
        return 0;
}