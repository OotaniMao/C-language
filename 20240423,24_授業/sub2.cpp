#include<stdio.h>
//�Q�ǉ��̂��܂��Ȃ�
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int radNumber;

    //�����̏�����
    srand((unsigned int)time(NULL));

    //for (int i = 0; i < 10; i++)
    //{
        radNumber = rand() % 16;
        printf("�����_���Ȑ�����%d�ł�\n", radNumber);
    //}

    return 0;
}