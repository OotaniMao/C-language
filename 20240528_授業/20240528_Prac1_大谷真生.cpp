#include<stdio.h>
#pragma warning(disable:4996)

/*���[�U�[���͂̍��v�l���v�Z����

���[�U�[�ɐ��̐�������͂����A���̍��v�l���v�Z����v���O�������쐬���܂��傤�B
���[�U�[�����̐�������͂����ꍇ�A�v���O�����͓��͂��I�����A���v�l��\�����܂��B

���Ȃ��Ƃ���x�̓��[�U�[�ɓ��͂����߂�悤�ɂ��Ă��������B*/

int main(void)
{
    //�ϐ��錾
    int n;
    int sum = 0;
   
    //�v�Z������
    do
    {
        //���͂𑣂�
        printf("���̐�������͂��Ă��������B\n");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("���͂��ꂽ���l�Ɍ�肪����܂��B\n");
        }
        else
        {
            //�v�Z
            sum = sum + n;
        }

    } while (n >= 0);

    //���v�l��\��
    printf("���v:%d",sum);

    return 0;
}