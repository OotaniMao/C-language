#include<stdio.h>
#pragma warning(disable:4996)

/*�T�C�Y���������l����͂��A�������̕����ŁA���̃T�C�Y�́~���\������v���O�������쐬���Ȃ����B*/

int main(void)
{
    //�ϐ��錾
    int i, j, size;

    //���l�̓��́i�T�C�Y�j
    printf("��������͂��Ă�������\n");
    scanf("%d", &size);
    
    for (i = 0; i < size; i++)//�T�C�Y�̏c�i���[�v�j
    { 
        for (j = 0; j < size; j++)//�T�C�Y�̉��i���[�v�j
        {
            if (i == j)//i��j��������
            {
                printf("X");
            }
            else if((size-1-i)==j)//j�ƃT�C�Y����i-1-i�j��������������
            {
                printf("X");
            }
            else //��L�ȊO�͋�
            {
                printf(" ");
            }
           
        }
        printf("\n");
    }

    return 0;
}