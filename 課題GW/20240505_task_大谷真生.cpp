#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*�o�b�e�B���O�Q�[��

������0:�X�g���[�g1:�J�[�u2:�t�H�[�N�Ƃ��ăo�b�^�[�Ƃ̑ΐ���s���܂��傤�B
�v���C���[�́A�s�b�`���[�ƂȂ��L�̃{�[���𓊂��܂��B
CPU�̓����_���ł����ł��Ă��܂��B
���������ł���΃q�b�g�Ƃ���Q�[���ɕ����܂��B
�Ⴄ�����Ȃ�o�b�^�[���łĂȂ������ƌ������ŏ����ƂȂ�܂��B*/

int main(void)
{
	//�ϐ��錾
	int Butter;
	int Pitture;

	//�����̏�����
	srand((unsigned int)time(NULL));

	//�o�b�^�[�̑I���i�����_���j
	Butter = rand() % 3;

	//�L�[�{�[�h����̓��͂𑣂�
	printf("�o�b�e�B���O�Q�[��\n�s�b�`���[�Ƃ��ăo�b�^�[�Ƒΐ킵�܂��傤�B\n0:�X�g���[�g�@1:�J�[�u�@2:�t�H�[�N\n");
	printf("�s�b�`���[�F");
	scanf("%d", &Pitture);

	//���l�͈̔͐ݒ�
	if (Pitture < 0 || 2 < Pitture)
	{
		printf("���͂������l�Ɍ�肪����܂��B\n");

		return 1;
	}

	//�o�b�^�[�̑I����\��
	printf("�o�b�^�[: %d\n", Butter);

	//���s�̔���E�\��
	if (Pitture == Butter)
	{
		printf("HIT!!\nYOUR LOSE\n");
	}
	else
	{
		printf("YOUR WIN!!\n");
	}

	return 0;
}