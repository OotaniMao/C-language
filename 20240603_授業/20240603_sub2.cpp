#include<stdio.h>
#pragma warning(disable:4996)
//1000�̖񐔂̑f����\��
int main(void)
{
    //�ϐ��錾
    int n, i;
    
    n = 1000;
    //�f���̔���
    for (i = 2; i < n; i++)
    {
        //�������]�肪0�̎��f���łȂ�
        if (n % i == 0)
        {
            break;//���[�v���甲����
        }
    }
    //���茋�ʂ̕\��
    if (n == i)
    {
        printf("%d,",i);
    }
   
   return 0;
}