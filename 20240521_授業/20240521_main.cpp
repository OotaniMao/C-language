#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int sum = 0;
    int i, tmp;

    for (i = 0; i < 5; i++)
    {
        printf("%d人目:", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }

    printf("合計 = %d 平均 = %d\n", sum, sum / 5);

    return 0;
}