#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*�`���̈��u���lvs���_�v�̑Ό������̌��ʂ��o���܂��傤�B

���_�̓����_����1�_����5�_�Ƃ��܂��B
�e��œ��_��\�����܂��傤�B
9�񂪏I�������A���ꂼ��̓��_�Ƃǂ��炩�����������A������������\�����܂��傤�B*/

int main(void)
{
    //�ϐ��錾
    int i;
    int madman_score;
    int demigod_score;
    int madman_sum = 0;
    int demigod_sum = 0;

    //�����̏�����
    srand((unsigned int)time(NULL));

    //�Ό����J��Ԃ�
    for (i = 0; i < 9; i++)
    {
        //���_�i�����_���j
        madman_score = rand() % 6;
        demigod_score = rand() % 6;
        //���_�\��
        printf("%d���\n���l �\:%d�_\n���_ ��:%d�_\n", i+1, madman_score, demigod_score);
        madman_sum += madman_score;
        demigod_sum += demigod_score;
    }
    //�������ʂ̕\��
    printf("���v���_\n���l:%d�_\n���_:%d�_\n",madman_sum,demigod_sum);
    if (madman_sum < demigod_sum)
    {
        printf("���_ WIN\n");
    }
    else if (madman_sum > demigod_sum)
    {
        printf("���l WIN\n");
    }
    else
    {
        printf("DRAW\n");
    }

    return 0;
}