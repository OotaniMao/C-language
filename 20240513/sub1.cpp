#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

//変数を定義
typedef struct pos2D
{
    int x;
    int y;
}pos2D;

int main(void)
{
    //変数宣言
    pos2D chara1;
    //座標の設定
    chara1.x = 30;
    chara1.y = 40;
    //表示
    printf("(%d,%d)", chara1.x, chara1.y);

    return 0;
}