#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int n;
   
    do
    {
        //�J��Ԃ���������
        printf("���̐����l����͒l�ɓ���Ă�������:");
        scanf("%d", &n);

    } while (n < 0);//������
    //�\��
    printf("���̐����l%d�����͂���܂����B\n",n);

    return 0;
}
