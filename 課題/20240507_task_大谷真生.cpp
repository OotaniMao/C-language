#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*E�Q�[��


0:King(���l)�@1:Citizen(�s��)�@2:Servant(���l)�Ƃ��܂��B
CPU�́A0:King��1:Citizen��I�����܂��B
PLAYER�́A1:Citeizen��2:Servant���I�ׂ܂��B
Player�����������́A�uPlayerWIN�v��\�����܂��傤�B
CPU�����������́A�uCPUWIN�v��\�����܂��傤�B
�����Ȃ�uDraw�v��\�����܂��B 	
King��Citizen�ł́AKing�̏����ƂȂ�܂��B
Citizen��Servant�ł́ACitizen�̏����ɂȂ�܂��B
King��Servant�ł́AServant�������ƂȂ�܂��B*/

int main(void)
{
    //�ϐ��錾
    int cpu;
    int player;

    //�����̏�����
    srand((unsigned int)time(NULL));

    //cpu�̑I���i�����_���j
    cpu = rand() % 2;

    // �L�[�{�[�h����̓��͂𑣂�
    printf("E�Q�[���I�I\n��������͂���CPU�Ƒΐ킵�悤�I\n0�FKing�@1�FCitizen�@2�FServant\nCPU�́A0:King��1:Citizen��I�����܂��B\nPLAYER�́A1:Citeizen��2:Servant���I�ׂ܂��B\n");
    //�m�F�p
   // printf("%d", cpu);

    printf("player : ");
    scanf("%d", &player);

    //���l�͈̔͐ݒ�
    if (player < 1 || 2 < player)
    {
        printf("���͂��ꂽ���l�Ɍ�肪����܂��B\n");

        return 1;
    }

    printf("CPU : %d\n", cpu);

    //���s�̔���E�\��

    int win1 = player - cpu;

    if ( win1 == 0)//��������
    {
        printf("DRAW�I\n");
    }
    else
    {

        if ( win1 == 2) //player����������Ƃ�
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