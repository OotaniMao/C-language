#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int n,i;
    //入力を促す
    printf("数値を入力してください\n");
    scanf("%d", &n);
    //素数の判定
    for (i = 2; i < n; i++)
    {
        //割った余りが0の時素数でない
        if (n % i == 0)
        {
            break;//ループから抜ける
        }
    }
    //判定結果の表示
    if (n == i)
    {
        printf("素数\n");
    }
    else
    {
        printf("素数でない\n");
    }

    return 0;
}