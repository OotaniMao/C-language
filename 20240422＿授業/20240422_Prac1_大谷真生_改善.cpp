#include<stdio.h>
#pragma warning(disable:4996)

/*キーボードから整数2つを入力してください。
その2つの整数を使い、足し算、引き算、掛け算、割り算、剰算を行って
その答えを画面に出力してください。*/
int main(void)
{
    //変数宣言
    int x, y;
    //入力を促す
    printf("キーボードから整数2つを入力してください\n");
    //キーボードから入力
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    //計算
    int a = x + y;
    int b = x - y;
    int c = x * y;
    int d = x / y;
    int e = x % y;
    //計算結果表示
    printf("x + y = %d\n", a);
    printf("x - y = %d\n", b);
    printf("x * y = %d\n", c);
    printf("x / y = %d\n", d);
    printf("x % y = %d\n", e);

    return 0;
}