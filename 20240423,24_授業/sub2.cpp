#include<stdio.h>
//２つ追加のおまじない
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int radNumber;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //for (int i = 0; i < 10; i++)
    //{
        radNumber = rand() % 16;
        printf("ランダムな数字は%dです\n", radNumber);
    //}

    return 0;
}