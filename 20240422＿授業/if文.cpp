#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int x;
    //キーボードから入力
    scanf("%d", &x);
    //偶数だったら画面に表示する
    if (x % 2 == 0)
    {
        printf("偶数が入力されました\n");//結果表示
    }
    else
    {
        printf("奇数が入力されました\n");//結果表示
    }

    return 0;
}