#include<stdio.h>
#pragma warning(disable:4996)

/*�Q�[���̊T�v:

�v���C���[�͐�������͂��܂��B
�v���O�����͂��̐������f�����ǂ����𔻒肵�܂��B
�v���C���[�͎��ɐ�������͂��A�f�����ǂ����𓖂Ă܂��B
�v���C���[������������u�����I�v�ƕ\�����A���̐�������͂���悤�ɑ����܂��B
�v���C���[���ԈႦ����u�s�����ł��B�v�ƕ\�����A�ēx�������̑f��������s���悤�ɑ����܂��B
�v���C���[��0����͂�����Q�[�����I�����܂��B*/

int main(void)
{
    //�ϐ��錾
    int player_num, i,player,memory;

    //����
    printf("��������͂��Ă�������\n�܂�0����͂���ƃQ�[���I���ł��B\n����:");
   
    while (1)
    {
        scanf("%d", &player_num);
        //�Q�[���I������
        if (player_num == 0)
        {
            printf("�Q�[���I��\n");
            break;
        }
        //�f������
        for (i = 2; i < player_num; i++)
        {
            if (player_num % i == 0)
            {
                break;
            }
        }
        if (player_num == i)
        {
            memory = 1;
        }
        else
        {
            memory = 2;
        }
        //�f�����ǂ�������͂�����
        printf("��قǓ��͂����������f�����ǂ������ĂĂ�������\n�f��:1 �f���łȂ�:2\n�\�z:");
        scanf("%d", &player);
        //�Q�[���I������
        if (player == 0)
        {
            printf("�Q�[���I��\n");
            break;
        }
        //���딻��
        while (1)
        {
            if (memory == player)
            {
                printf("����!\n���̐�������͂��Ă�������\n����:");
                
                break;
            }
            else
            {
                printf("�s�����ł��B\n������x�f��������s���Ă�������\n�f��:1 �f���łȂ�:2\n�\�z:");
                scanf("%d", &player);
            }
        }

    }
    
    return 0;
}