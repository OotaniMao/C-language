#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾  
    int n;
    //���͂𑣂�
    printf("���������:");
    scanf("%d", &n);
    //�������������������J��Ԃ�
    while (n > 0)
    {
        printf("%d",n);//�\��
        n = n - 1;
    }

    return 0;
}