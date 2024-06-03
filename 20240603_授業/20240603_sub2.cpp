#include<stdio.h>
#pragma warning(disable:4996)
//1000の約数の素数を表示
int main(void)
{
    //変数宣言
    int n, i;
    
    n = 1000;
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
        printf("%d,",i);
    }
   
   return 0;
}