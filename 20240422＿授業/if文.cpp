#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int x;
    //�L�[�{�[�h�������
    scanf("%d", &x);
    //�������������ʂɕ\������
    if (x % 2 == 0)
    {
        printf("���������͂���܂���\n");//���ʕ\��
    }
    else
    {
        printf("������͂���܂���\n");//���ʕ\��
    }

    return 0;
}