#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int Pitture;
    int Batter;
    printf("�싅�ՃQ�[��\n�s�b�`���[���瓊�����鋅��ł��Ԃ��܂��傤\n0:�X�g���[�g�@1:�J�[�u�@2:�X���C�_�[\n");
    
    //�����̏�����
    srand((unsigned int)time(NULL));
    //�s�b�`���[�̑I���i�����_���j
    Pitture= rand() % 3;

    //�v���C���[�i�o�b�^�[�j�̓���
    scanf("%d", &Batter);
    //Hit��Out�𔻒�E�\��
    printf("�s�b�`���[��%d�ł����B\n", Pitture);

    if (Pitture == Batter)
    {
        printf("Hit\n");
    }
    else
    {
        printf("Out\n");
    }
    

    return 0;
}