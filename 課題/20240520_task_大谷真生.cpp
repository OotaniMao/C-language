#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*����񂯂�Q�[�����쐬���܂��傤�B

0�F�O�[�@1�F�`���L�@2�F�p�[�Ƃ��ăW�����P���Q�[�����쐬���܂��傤�B
CPU�̓����_���ŏ�L�̐�����I�����܂��B
�v���C���[�́A�L�[�{�[�h���琔������͂��܂��B
�v���C���[���������ꍇ�́A�uPLAYER WIN�v�Ƃ��āACPU���������ꍇ�́A�uCPU WIN�v��\�����A�����Ȃ�uDRAW�v��\�����Ă��������B
5�񏟕����s���A���ʂ�\�����܂��傤�B
����F
�@5�񏟕��I���F�������������s*/

int main(void)
{
    //�ϐ��錾
    int i{};
    int player;
    int cpu;
    int win = 0;
    int draw = 0; 
    int lose = 0;
    //�����̏�����
    srand((unsigned int)time(NULL));

   

    //player�̑I���𑣂�
    printf("����񂯂�Q�[��\n���I����CPU�ɏ������܂��傤�B\n0�F�O�[�@1�F�`���L�@2�F�p�[\n");
    
    //���s�̔���E���ʕ\��(�J��Ԃ�)
    for ( i = 0; i < 5; i++)
    {
        //player�̓���
        scanf("%d", &player);
        if (player < 0 || 2 < player)
        {
            printf("���͂��ꂽ���l�Ɍ�肪����܂�\n");
            return 1;
        }
        //CPU�̑I���i�����_���j
        cpu = rand() % 3;

        int win1 = player - cpu;

        if (win1 == 0)
        {
            printf("%d��ځ@DRAW\n",i+1);
        }
        else if (win1 == -1 || win1 == 2)
        {
            printf("%d��ځ@YOU WIN\n",i+1);
        }
        else
        {
            printf("%d��ځ@CPU WIN\n",i+1);
        }
        //�������ʂ𐔂���
       
        switch (win1)
        {
        case 0:
            draw = draw+1;
            break;
        case -1:
        case 2:
            win = win+1;
            break;
        default:
            lose = lose + 1;
            break;

        }
        
    }
    
    //5�񏟕��̌��ʕ\��
    printf("5�񏟕��I��:%d��%d����%d�s\n",win,draw,lose);

    return 0;
}