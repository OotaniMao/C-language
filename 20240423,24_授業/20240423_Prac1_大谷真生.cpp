#include<stdio.h>
#pragma warning (disable:4996)

int main(void)
{
    //�ϐ��錾
    int MAX;
    int a;
    int b;
    int c;
    int d;
    //�L�[�{�[�h�������
    printf("�������S���͂��A�ő�l��\�������Ă�������\n");
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("d = ");
    scanf("%d", &d);
    //�ő�l������
    MAX = a;
    //�ő�l�𔻒�
        if (MAX < b)
        {
            MAX = b;
        }
        if (MAX < c)
        {
            MAX = c;

        }
        if (MAX < d)
        {
            MAX = d;
        }
        //�ő�l�\��
        printf("�ő�l��%d�ł�\n", MAX);
        return 0;
}