#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*�����ăQ�[��Var2
0�`15�܂ł̃����_���Ȑ������쐬���Ȃ����B
�v���C���[�̓L�[�{�[�h����ǂ�Ȑ����Ȃ̂�����͂������𓖂ĂĂ��������B
�����Ȃ�uBING�v�A�}3���Ȃ��Ȃ�uNear�v�A����ȊO�Ȃ�uLoser�v��\�����Ȃ����B*/

int main(void)
{
	//�ϐ��錾
	int radnumber;
	int num1;

	//����������
	srand((unsigned int)time(NULL));

	//�����_���Ȑ����𐶐�
	radnumber = rand() % 16;

	//�L�[�{�[�h����̓��͂𑣂�
	printf("�����_���ɐ�������鐮���𓖂ĂĂ��������B\n���͈͂�0�`15�ł��B\n");
	printf("�\�z�F");
	scanf("%d", &num1 );

	//���l�͈̔͐ݒ�
	if (num1 < 0 || 15 < num1)
	{
		printf("���͂������l�Ɍ�肪����܂��B\n");

		return 1;
	}

	//���딻��E���ʕ\��
	if (num1 == radnumber)
	{
		printf("BINGO\n");
	}
	else
	{
		if ( num1 >= radnumber - 3  &&  num1 <= radnumber + 3 )
		{
			printf("Near\n");
		}
		else
		{
			printf("Loser\n");
		}

	}

	//�����_���Ȑ�����\��
	printf("�����F%d", radnumber);

	return 0;
}