#include<stdio.h>

/*���\��\�����Ă݂܂��傤�B
�i1�̒i����9�̒i�܂Łj
*/

int main(void)
{
    //�ϐ��錾
    int i,j;
    int mul;

    for (i = 0; i < 9; i++)//�i�̐���
    {
        for (j = 0; j < 9; j++)
        {
            mul = (i + 1) * (j + 1);
            printf("%d*%d=%d\n", i + 1, j+1,mul);
        }
    }

    return 0;
}