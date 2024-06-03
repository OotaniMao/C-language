#include<stdio.h>

/*九九表を表示してみましょう。
（1の段から9の段まで）
*/

int main(void)
{
    //変数宣言
    int i,j;
    int mul;

    for (i = 0; i < 9; i++)//段の数字
    {
        for (j = 0; j < 9; j++)
        {
            mul = (i + 1) * (j + 1);
            printf("%d*%d=%d\n", i + 1, j+1,mul);
        }
    }

    return 0;
}