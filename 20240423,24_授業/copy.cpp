#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#pragma warning(disable:4996)
/*
�싅�ՃQ�[��
0�F�X�g���[�g�@1�F�J�[�u�@2�F�X���C�_�[�Ƃ��āA�P�������̖싅�Q�[�����쐬���܂��傤�B
�s�b�`���[�́A�����_���ŏ�L�̐�����I�����܂��B
�o�b�^�[�i�v���C���[�j�̓L�[�{�[�h������͂��ă{�[����ł��Ă��������B
��0�`3�ȊO����͂�����uOut�v��\�������Ă��������B
���������Ȃ�uHit�v�A�Ⴄ�����Ȃ�uOut�v��\�����Ă��������B
*/
int main(void)
{

    //�ϐ��錾
    int pitcher, Batter;
    printf("�싅�ՃQ�[��\n�s�b�`���[���瓊�����鋅��ł��Ԃ��܂��傤\n0�F�X�g���[�g�@1�F�J�[�u�@2�F�X���C�_�[\n");
    //�����̏�����
    srand((unsigned int)time(NULL));
    //�s�b�`���[�̑I���i�����_���j
    pitcher = rand() % 3;
    //�v���C���[�i�o�b�^�[�j�̓���
    scanf("%d", &Batter);
    //Hit��Out�𔻒�E�\��
    printf("�s�b�`���[��%d�ł����B\n", pitcher);
    if (pitcher == Batter)
    {
        printf("Hit!\n");
    }
    else
    {
        printf("Out!\n");
    }
    return 0;
}