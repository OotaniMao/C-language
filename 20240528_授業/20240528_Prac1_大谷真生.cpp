#include<stdio.h>
#pragma warning(disable:4996)

/*ユーザー入力の合計値を計算する

ユーザーに正の整数を入力させ、その合計値を計算するプログラムを作成しましょう。
ユーザーが負の整数を入力した場合、プログラムは入力を終了し、合計値を表示します。

少なくとも一度はユーザーに入力を求めるようにしてください。*/

int main(void)
{
    //変数宣言
    int n;
    int sum = 0;
   
    //計算させる
    do
    {
        //入力を促す
        printf("正の整数を入力してください。\n");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("入力された数値に誤りがあります。\n");
        }
        else
        {
            //計算
            sum = sum + n;
        }

    } while (n >= 0);

    //合計値を表示
    printf("合計:%d",sum);

    return 0;
}