#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*�싅��Part3

�s�b�`���[�Ƃ��đ���`�[����}���܂��傤
�������́A0�F�X�g���[�g�@1�F�J�[�u�@2�F�X���C�_�[�@3�F�V���J�[�ł��B
CPU�ł���o�b�^�[�͏�L�̔ԍ��������_���őI�����܂��B
���������ł���Αł��ꂽ�Ƃ���75���̊m���Ńq�b�g�ɂȂ�A25���̊m���ŃA�E�g�ƂȂ�܂��B
�q�b�g��4��o���畉���ɂȂ�܂��B
�Ⴄ�����Ȃ�75���̊m���ŃX�g���C�N�ƂȂ�A25���m���Ń{�[���ƂȂ�܂��B
�{�[����4��1�q�b�g�ł��B
�X�g���C�N��3��1�A�E�g�ł��B
�A�E�g��3�ŏ����ƂȂ�܂��B
�q�b�g�A�A�E�g���o����X�g���C�N�ƃ{�[���̃J�E���g��0�ɂȂ�܂��B*/

int main(void)
{
    //�ϐ��錾
    int piture;
    int butter;
    int hit = 0;//hit�̐�
    int strike = 0;//strike�̐�
    int out, boul;//����
    int out_count=0;//out�̐�
    int boul_count=0;//bool�̐�
    int count=0;//��������
    //�����̏�����
    srand((unsigned int)time(NULL));
    //���͂𑣂�
    printf("�s�b�`���[�Ƃ��đ���`�[����}���܂��傤\n�������́A0�F�X�g���[�g�@1�F�J�[�u�@2�F�X���C�_�[�@3�F�V���J�[�ł�\n");
    
    //����i�J��Ԃ��j
    do
    {
        //�����ڂ���\��
        count = count + 1;
        printf("%d����\n",count);
        //out�ɂȂ�m��
        out = rand() % 4;
        //boul�ɂȂ�m��
        boul = rand() % 4;
        //cpu�̑I���i�����_���j
        butter = rand() % 4;
        //player�̑I��
        printf("�s�b�`���[:");
        scanf("%d", &piture);
        //�o�b�^�[�̑I����\��
        printf("�o�b�^�[:%d\n", butter);
        //���l�͈̔͐ݒ�
        if (piture < 0 || 3 < piture)
        {
            printf("���͂��ꂽ���l�Ɍ�肪����܂�\n�ēx���͂��Ă��������B\n");
            scanf("%d", &piture);
        }
        //����
        if (piture == butter)//�����̎�
        {
            if (out == 0)//�A�E�g
            {
                printf("����:OUT!\n");
                out_count = out_count + 1;
            }
            else//�q�b�g
            {
                printf("����:HIT!!\n");
                hit = hit + 1;
            }
        }
        else//�قȂ鐔���̎�
        {
            if (boul == 0)//�{�[��
            {
                printf("����:BOOL\n");
                boul_count = boul_count + 1;
            }
            else//�X�g���C�N
            {
                printf("����:STRIKE\n");
                strike = strike + 1;
            }
        }
        if (boul_count == 4)//�{�[��4���1�q�b�g
        {
            hit = hit + 1;
        }
        else if (strike == 3)//�X�g���C�N3���1�A�E�g
        {
            out_count = out_count + 1;
        }
        if (piture == butter || boul_count == 4 || strike == 3)//�X�g���C�N�ƃ{�[����0�ɖ߂�
        {
            strike = 0;
            boul_count = 0;
        }
        
    } while (hit<4&&out_count<3);
    //���s�̔��茋�ʕ\��
    if (hit == 4)
    {
        printf("OUT:%d\nHIT:%d\nYOU LOSE\n",out_count,hit);
    }
    else if (out_count == 3)
    {
        printf("OUT:%d\nHIT:%d\nYOU WIN\n", out_count, hit);
    }
    
    return 0;
}