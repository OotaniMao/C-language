#include<stdio.h>
#pragma warning(disable:4996)

/*���鐔���L�[�{�[�h������͂����̐��̂��ׂĂ̖񐔂�\������*/

int main(void)
{
    //�ϐ��錾
    int i;
    int player;

    //�L�[�{�[�h�������
    printf("�񐔂𒲂ׂ������l����͂��Ă��������B\n���ׂ������l:");
    scanf("%d", &player);

    //�񐔂𒲂ׂ�
    for (i = 0; i < player; i++)
    {
        if (player%(i+1)==0)//���͂����������������]�肪0�̎���
        {
            printf("%d,", i + 1);//�񐔂�\��
        }
        
    }

    return 0;
}