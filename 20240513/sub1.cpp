#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

//�ϐ����`
typedef struct pos2D
{
    int x;
    int y;
}pos2D;

int main(void)
{
    //�ϐ��錾
    pos2D chara1;
    //���W�̐ݒ�
    chara1.x = 30;
    chara1.y = 40;
    //�\��
    printf("(%d,%d)", chara1.x, chara1.y);

    return 0;
}