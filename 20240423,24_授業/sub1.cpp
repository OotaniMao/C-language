#include<stdio.h>
#pragma warning(disable:4996)
int main(void)
{
    int a;
    scanf("%d", &a);

    if (a >= 0 && a <= 10)
    {
        printf("入力した数は0〜10までの数です\n");
    }
    if( a < 0 || a > 10 )
    {
        printf("入力した数は負の数か10より大きい数です\n");
    }
    return 0;
}