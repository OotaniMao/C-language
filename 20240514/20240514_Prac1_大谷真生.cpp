#include<stdio.h>
#pragma warning(disable:4996)

/*���ѕ\���쐬���܂��傤�B

�w���̎������ʂ�\���A���̃����o�[���������\���̂��`���܂��傤�B
���O�ichar[128]�j
�_���iint�j
���ѕ]���ichar�j
�쐬�����\���̂̕ϐ��ɁA���O�Ǝ����̓��_���L�[�{�[�h������͂��܂��傤�B
���ѕ]���͈ȉ��̂Ƃ���ł��B
S��90�_�ȏ�
A��90�_����70�_�ȏ�
B��70�_����50�_�ȏ�
C��50�_����30�_�ȏ�
D��30�_����
�\���̂̓��e��\������B*/

typedef struct Test
{
    char name[128];//���O
    int score;//�_��
    char grades;//���ѕ]��
}Test;

int main(void)
{
    //�\���̂�ϐ��ɂ���
    Test test;

    //����
    printf("���O����͂��Ă��������B\n");
    scanf("%s", &test.name);
    printf("�����̓��_����͂��Ă��������B\n");
    scanf("%d", &test.score);
    
    //���l�͈̔͐ݒ�
    if (test.score < 0 || 100 < test.score)
    {
        printf("���͂��ꂽ���l�Ɍ�肪����܂��B\n");

        return 1;
    }

    //���ѕ]���i����j
    if (test.score >= 90)
    {
        test.grades ='S';
    }
    else if (test.score < 90 && test.score >= 70)
    {
        test.grades ='A';
    }
    else if (test.score < 70 && test.score >= 50)
    {
        test.grades = 'B';
    }
    else if (test.score < 50 && test.score >= 30)
    {
        test.grades = 'C';
    }
    else
    {
        test.grades = 'D';
    }

    //���ʕ\��
    printf("���O:%s\n���_:%d\n���ѕ]��:%c\n",test.name,test.score,test.grades);


    return 0;
}