#include<stdio.h>
#pragma warning(disable:4996)

/*�T�C�Y���������l����͂��A�������̕����ŗ�̂悤�ȎO�p�`��\������v���O�������쐬���Ȃ����B*/

int main(void)
{
	//�ϐ���`
	int size;
	int i{};
	int j{};

	//���l�̓��͂𑣂�
	printf("�O�p�`�̃T�C�Y����͂��Ă��������B\n");
	scanf("%d", &size);

	//�O�p�`��\��������
	for (i = 0; i < size; i++)
	{
		//�󔒂�\��������
		for (j = 0; j < size - i; j++)
		{
			printf(" ");
		}
		//X��\��������
		for (j = 0; j < (i*2+1); j++)
		{
			printf("X");
		}
		printf("\n");//���s
	}


	return 0;
}