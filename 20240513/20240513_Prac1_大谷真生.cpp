#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*���̓�����\��

1�`12���܂ł̓�����\������v���O���~���O���쐬���܂��傤�B
�L�[�{�[�h���琔������͂��Ă��������B
���͂������̓�����\�����Ă��������B
��F
���́�3
3���̓����́A31���ł��B
�����͈ȊO�́A�u���͂Ɍ�肪����܂��B�v��\�������Ă��������B*/

int main(void)
{
    //�ϐ��錾
    int month;
    int year;
    //�L�[�{�[�h������͂𑣂�
    printf("1�`12���̂����ꂩ�̓�������͂��Ă��������B\nYOU:");
    scanf("%d", &month);
    //������̓�������E�\��
    switch (month)
    {
    case 2:
        printf("�������͂��Ă��������B\n");
        scanf("%d", &year);
        if (0 < year)
        {
            //���邤�N
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                printf("%d�N�͂��邤�N�Ȃ̂ŁA29���ł��B\n",year);
            }
            else
            {
                printf("%d�N�͒ʏ�N�Ȃ̂ŁA28���ł��B\n", year);
            }
        }
        else
        {
            printf("�I���O�ƂȂ邽�߁A������܂���B\n%d���̓�����28��or29���ł��B\n", month);
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d���̓����́A31���ł��B\n",month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("4���̓����́A30���ł��B\n",month);
        break;
    default:
        //���͊O
        printf("���͂Ɍ�肪����܂��B\n");
        break;
    }

    return 0;
}