#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int n;
   
    do
    {
        //繰り返したいこと
        printf("正の整数値を入力値に入れてください:");
        scanf("%d", &n);

    } while (n < 0);//条件式
    //表示
    printf("正の整数値%dが入力されました。\n",n);

    return 0;
}
