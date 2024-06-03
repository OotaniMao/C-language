#include<stdio.h>
#pragma warning(disable:4996)

/*キーボードから２つの整数を入力してください。
※範囲は、0〜50までとします。
２つの数字を足してください。
和が偶数なら「丁」を画面に表示してください。
和が奇数なら「半」を画面に表示してください。*/

int main(void)
{
    //変数宣言
    int x, y;
    //キーボードから入力
    scanf("%d", &x);
    scanf("%d", &y);
    //0～50まで範囲指定
    if (0 >= x, y <= 50)
    {
        int a= x + y;//計算
        printf("x + y = %d\n", a);//計算結果表示
        if (a % 2 == 0)//偶数の時画面表示
        {
            printf("丁\n");//偶数
        }
        else
        {
            printf("半\n");//奇数
        }
    }

    return 0;
}