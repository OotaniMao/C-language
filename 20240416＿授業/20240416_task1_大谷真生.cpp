#include <stdio.h>

int main(void)
{
    //定義宣言
    int x = 5;
    int y = 10;
    //再定義
    int X = y;
    int Y = x;
    //表示
    printf("x = %d\n", X);
    printf("y = %d\n", Y);

    return 0;
}