#include<stdio.h>
#pragma warning(disable:4996)

/*�L�[�{�[�h���琮��2����͂��Ă��������B
����2�̐������g���A�����Z�A�����Z�A�|���Z�A����Z�A��Z���s����
���̓�������ʂɏo�͂��Ă��������B*/
int main(void)
{
    //�ϐ��錾
    int x , y;
    //���͂𑣂�
    printf("�L�[�{�[�h���琮��2����͂��Ă�������\n");
    //�L�[�{�[�h�������
    printf("x = ");
    scanf("%d", &x);
    printf("y = ");
    scanf("%d", &y);
    //�v�Z
    int a = x + y;
    int b = x - y;
    int c = x * y;
    int d = x / y;
    int e = x % y;
    //�v�Z���ʕ\��
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);

    return 0;
}