#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int x;
    scanf("%d", &x);

    if (x % 2)
    {
        printf("奇数が入力されました\n");
    }
    else
    {
        printf("偶数が入力されました\n");
    }
    //int a = 5;
    //int b = 2;

    //printf("a == bの値は%d\n", a == b);
    //printf("a != bの値は%d\n", a != b);

    return 0;
}