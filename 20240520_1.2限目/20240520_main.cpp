#include<stdio.h>

int main(void)
{
    //変数宣言
    int i;

    //ループ for(初期化;条件;増分;)
    for (i = 0; i < 10; i++)
    {
        printf("%d,", i);
    }
    //表示
    printf("\nループ終了後のi :%d\n", i);

    return 0;
}