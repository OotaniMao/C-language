#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*����񂯂�Q�[�����쐬���܂��傤�B

0�F�O�[�@1�F�`���L�@2�F�p�[�Ƃ��ăW�����P���Q�[�����쐬���܂��傤�B
CPU�̓����_���ŏ�L�̐�����I�����܂��B
�v���C���[�́A�L�[�{�[�h���琔������͂��܂��B
�v���C���[���������ꍇ�́A�uPLAYER WIN�v�Ƃ��āA
CPU���������ꍇ�́A�uCPU WIN�v��\�����A�����Ȃ�uDRAW�v��\�����Ă��������B*/
int main(void)
{
    //�ϐ��錾
    int cpu;
    int player;

    //�����̏�����
    srand((unsigned int)time(NULL));

    //�����̐���
    cpu = rand() % 3;

    // �L�[�{�[�h����̓��͂𑣂�
    printf("����񂯂�Q�[���I�I\n��������͂���CPU�Ƃ���񂯂񂵂悤�I\n0�F�O�[�@1�F�`���L�@2�F�p�[\n");
    //�m�F�p
    //printf("%d", cpu);

    printf("player : ");
    scanf("%d", &player);
    printf("CPU : %d\n", cpu);
   
    //���l�͈̔͐ݒ�
    if (player < 0 || 2 < player)
    {
        printf("���͂��ꂽ���l�Ɍ�肪����܂��B\n");

        return 1;
    }
    //���s�̔���E�\��
    if (player == cpu)//������
    {
        printf("DRAW�I\n");
    }
    else 
    {
        int win1 = player - cpu;

        if ( win1 == -1 || win1 == 1) //player����������Ƃ�
        {
            printf("PLAYER WIN!!\n");
        }
        else
        {
            printf("CPU WIN!!\n");
        }
    }

    return 0;
}