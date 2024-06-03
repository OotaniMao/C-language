#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数を宣言
    int h;
    //キーボードから入力を促す
    printf("グー：1　チョキ：2　パー：3　のいずれかを入力\nYOU：");
    scanf("%d", &h );
    //判定・結果表示
    switch ( h )
    {
    case 1:
        printf("グー\n");
        break;
    case 2:
        printf("チョキ\n");
        break;
    case 3:
        printf("パー\n");
        break;
    default:
        printf("1ｰ3以外が入力されました。\n");
        break;
    }

    return 0;
}