#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int x;
    scanf("%d", &x);

    if (x % 2)
    {
        printf("������͂���܂���\n");
    }
    else
    {
        printf("���������͂���܂���\n");
    }
    //int a = 5;
    //int b = 2;

    //printf("a == b�̒l��%d\n", a == b);
    //printf("a != b�̒l��%d\n", a != b);

    return 0;
}