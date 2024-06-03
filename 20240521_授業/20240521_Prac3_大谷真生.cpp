#include<stdio.h>
#pragma warning(disable:4996)

/*サイズを示す数値を入力し、何等かの文字で、そのサイズの×印を表示するプログラムを作成しなさい。*/

int main(void)
{
    //変数宣言
    int i, j, size;

    //数値の入力（サイズ）
    printf("数字を入力してください\n");
    scanf("%d", &size);
    
    for (i = 0; i < size; i++)//サイズの縦（ループ）
    { 
        for (j = 0; j < size; j++)//サイズの横（ループ）
        {
            if (i == j)//iとjが等しい
            {
                printf("X");
            }
            else if((size-1-i)==j)//jとサイズから（-1-i）した数が等しい
            {
                printf("X");
            }
            else //上記以外は空白
            {
                printf(" ");
            }
           
        }
        printf("\n");
    }

    return 0;
}