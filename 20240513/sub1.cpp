#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

//•Ï”‚ğ’è‹`
typedef struct pos2D
{
    int x;
    int y;
}pos2D;

int main(void)
{
    //•Ï”éŒ¾
    pos2D chara1;
    //À•W‚Ìİ’è
    chara1.x = 30;
    chara1.y = 40;
    //•\¦
    printf("(%d,%d)", chara1.x, chara1.y);

    return 0;
}