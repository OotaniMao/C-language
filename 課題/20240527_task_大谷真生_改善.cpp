#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*PK��
�v���C���[��CPU�Ō��݂ɃL�b�J�[�ƃL�[�p�[�̖�ڂ��s���A5��s���܂��傤�B
�R������́A0:���@1:���ʁ@2:�E�ƂȂ�܂��B
���������Ȃ�~�߂��ē��_�ɂ͂Ȃ�܂���B�قȂ�Γ��_�ƂȂ�܂��B
3�_��ɐ�悵�����������ƂȂ�܂��B
���_�ł���΁A�T�h���f�X�i������j�ƂȂ�A�ǂ��炩���������_����������������Ƃ��܂��B
�ŏI�I�ɁA�ǂ��炪����������\�������܂��傤�B*/

int main(void)
{
    //�ϐ��錾
    int player;
    int player_score = 0;
    int cpu;
    int cpu_score = 0;
    int count = 0;

    //�����̏�����
    srand((unsigned int)time(NULL));


    //player�̓��͂𑣂�
    printf("PK��\n�v���C���[��CPU�Ō��݂ɃL�b�J�[�ƃL�[�p�[�̖�ڂ��s���܂��B\n�R������́A0:���@1:���ʁ@2:�E�ł��B\n");

    //�J��Ԃ�
    while (player_score < 3 && cpu_score < 3 || player_score == cpu_score)
    {
        //CPU�̑I���i�����_���j
        cpu = rand() % 3;

        //player�̃^�[��
        printf("%d���\nplayer�̍U��:", count + 1);
        scanf("%d", &player);

        //���l�͈̔͐ݒ�
        while (player < 0 || 2 < player)
        {
            printf("���͂��ꂽ���l�Ɍ�肪����܂��B\nplayer�̍U��:");
            scanf("%d", &player);
        }
        if (player == cpu)//�L�b�J�[
        {
            printf("�h����܂���\n");
        }
        else
        {
            printf("�S�[���I\n");
            player_score = player_score + 1;
        }
        //cpu�̃^�[��

          //CPU�̑I���i�����_���j
        cpu = rand() % 3;
        printf("cpu�̍U��\nplayer�͖h��:");
        scanf("%d", &player);

        //���l�͈̔͐ݒ�
        while (player < 0 || 2 < player)
        {
            printf("���͂��ꂽ���l�Ɍ�肪����܂��B\nplayer�̍U��:");
            scanf("%d", &player);
        }
        if (player == cpu)//�L�[�p�[
        {
            printf("�h���܂���\n");
        }
        else
        {
            printf("�S�[�����ꂽ!\n");
            cpu_score = cpu_score + 1;
        }
        //�^�[����
        count = count + 1;
        if (cpu_score == 3 && player_score == 3)//�T�h���f�X�i������j
        {
            printf("������i�T�h���f�X�j�˓��I\n");
        }

    }
    //���ʕ\��
    if (player_score > cpu_score)//player�̏����̎�
    {
        printf("player:%d�_��cpu:%d�_��player�̏���\n", player_score, cpu_score);
    }
    else//cpu�̏����̎�
    {
        printf("player:%d�_��cpu:%d�_��cpu�̏���\n", player_score, cpu_score);
    }


    return 0;
}