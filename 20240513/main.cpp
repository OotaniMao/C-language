#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ���錾
    int h;
    //�L�[�{�[�h������͂𑣂�
    printf("�O�[�F1�@�`���L�F2�@�p�[�F3�@�̂����ꂩ�����\nYOU�F");
    scanf("%d", &h );
    //����E���ʕ\��
    switch ( h )
    {
    case 1:
        printf("�O�[\n");
        break;
    case 2:
        printf("�`���L\n");
        break;
    case 3:
        printf("�p�[\n");
        break;
    default:
        printf("1�3�ȊO�����͂���܂����B\n");
        break;
    }

    return 0;
}