#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int n,i;
    //���͂𑣂�
    printf("���l����͂��Ă�������\n");
    scanf("%d", &n);
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
        printf("�f��\n");
    }
    else
    {
        printf("�f���łȂ�\n");
    }

    return 0;
}