#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*�Ƃ���H���̌��Ԃ̔���グ�́H�H

�����s���ɂ��錒�N����ɍl�������т�񋟂��Ă����Ƃ���H��
�X���1�l�݂̂ōs�Ȃ��Ă���̂ŁA�񋟂���H����1����25�H�܂łƂȂ��Ă��܂��B

���̉c�Ɠ���22���Ƃ��āA���̔���グ�͂�����ł��傤���H
��1���̐H���̓����_���Ő������܂��傤�B
1�H950�~�ł��B
*/

int main(void)
{
    //�ϐ��錾
    int i; //���[�v�J�E���g
    int meals;
    int days;
    int month =0;
    int sum=0;
    //�����̏�����
    srand((unsigned int)time(NULL));
    //���[�v
    for (i = 0; i < 22; i++)
    {
        
        //�H���̐����i�����_���j
        meals = rand() % 26;
        //����̔���グ�v�Z
        days = meals * 950;
        printf("%d����\n���ꂽ�H��:%d�H\n1���̔���:%d�~\n",i,meals,days);
        sum += meals;
        //���̔���グ�v�Z
        month += days;
    }

    //���̔���グ�\��
    printf("���̔���グ���H��:%d\n���̔���グ:%d�~\n",sum, month);

    return 0;
}