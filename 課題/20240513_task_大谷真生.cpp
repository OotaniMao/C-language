#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*����񂯂�Q�[�����쐬���܂��傤�B

0�F�O�[�@1�F�`���L�@2�F�p�[�Ƃ��ăW�����P���Q�[�����쐬���܂��傤�B
CPU�̓����_���ŏ�L�̐�����I�����܂��B
�v���C���[�́A�L�[�{�[�h���琔������͂��܂��B
�����̑O�ɁA���ꂼ��̎��I�����Ă��������B
�v���C���[���������ꍇ�́A�uPLAYER WIN�v�Ƃ��āA
CPU���������ꍇ�́A�uCPU WIN�v��\�����A�����Ȃ�uDRAW�v��\�����Ă��������B*/

int main(void)
{
    //�ϐ��錾
    int cpu;
    int player;

    // �����̏�����
    srand((unsigned int)time(NULL));

    // CPU�̑I���i�����_���j
    cpu = rand() % 3;

    // �v���C���[�̑I���𑣂�
    printf("����񂯂�Q�[���I�I\n������I���CPU�ɏ��Ƃ��I\n0�F�O�[�@1�F�`���L�@2�F�p�[\n");
    printf("���I�����Ă�������\n");
    scanf("%d", &player);

  
     // �v���C���[�̑I����\��
    switch (player)
    {
    case 0:
        printf("���Ȃ��̑I��:�O�[\n");
        break;

    case 1:
        printf("���Ȃ��̑I��:�`���L\n");
        break;

    case 2:
        printf("���Ȃ��̑I��:�p�[\n");
        break;

    default:
        printf("���͂��ꂽ���l�Ɍ�肪����܂��B\n");
        break;

        return 1;
    }

    //CPU�̑I����\��
    switch (cpu)
    {
    case 0:
        printf("CPU�̑I���F�O�[\n");
        break;

    case 1:
        printf("CPU�̑I���F�`���L\n");
        break;

    case 2:
        printf("CPU�̑I���F�p�[\n");
        break;
        
    }

    // ����E�\��
    int win1 = player - cpu;

    if (win1 == 0)
    {
        printf("DRAW\n");
    }
    else if (win1 == -1 || win1 == 2)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("CPU WIN\n");
    }


    return 0;
}