#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*�������ăQ�[��

�����_����0�`100�܂ł̐����𓖂Ă�Q�[�����쐬���܂��傤�B
�v���C���[�͐�������͂��Ă��̐��������Ă܂��B
�O�ꂽ�ꍇ�A���͂��Đ������傫�������������̃q���g��\�����܂��傤�B
�v���C���[�́A���������Ă�܂ŉ𓚂ł���悤�ɂ��Ă��������B*/

int main(void)
{
    //�ϐ��錾
    int player, num;

    //�����̏�����
    srand((unsigned int)time(NULL));

    //�����_���Ȑ����̐���
    num = rand() % 101;

    //player�̓��͂𑣂�
    printf("�������ăQ�[��\n0�`100�܂ł̐�������͂��ē��ĂĂ��������B\n");

    //����E���ʕ\���i�J��Ԃ��j
    while (num >= 0&&num<=100)
    {
        //player�̓���
        printf("�\�z:");
        scanf("%d", &player);

        //���l�͈̔͐ݒ�
        if (player < 0 || 100 < player)
        {
            printf("���͂��ꂽ���l�Ɍ�肪����܂��B\n�ēx���͂��Ă��������B\n");
        }
        else
        {
            //����
            if (player == num)//���l������������
            {
                printf("�����I\n");
                break;          //���������炻���Ń��[�v���甲����
            }
            else
            {
                printf("�s����\n");//���l���Ⴄ�Ƃ�
                //�q���g�̕\��
                if (player < num)       //�����͓��͂������l�ȏ�
                {
                    printf("�����͓��͂������l�ȏ�ł��B\n");
                }
                else if (num < player)      //�����͓��͂������l����
                {
                    printf("�����͓��͂������l�����ł��B\n");
                }
            }
        }
    }

    return 0;
}