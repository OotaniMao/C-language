#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言  
    int n;
    //入力を促す
    printf("整数を入力:");
    scanf("%d", &n);
    //条件式が成立する限り繰り返す
    while (n > 0)
    {
        printf("%d",n);//表示
        n = n - 1;
    }

    return 0;
}