#include<stdio.h>
#pragma warning(disable:4996)

/*�L�[�{�[�h���͂��g�p���܂��傤�B

�L�[�{�[�h���琔����2���͂��܂��傤�B
���͂����������A�����Z�A�����Z�A�|���Z�A����Z���s���܂��傤�B
���ʂ���ʂɏo�͂��܂��傤�B*/

int main(void)
{
	//�ϐ��錾
	double num1;
	double num2;
	//�L�[�{�[�h������͂𑣂�
	printf("�C�ӂ̐��������͂��Ă�������\n");
	printf("a = ");
	scanf("%f", &num1);
	printf("b = ");
	scanf("%f", &num2);
	//�v�Z�����ʕ\��
	printf("a + b = %f\n", num1 + num2);//�����Z
	printf("a - b = %f\n", num1 - num2);//�����Z
	printf("a * b = %f\n", num1 * num2);//�|���Z
	printf("a / b = %f\n", num1 / num2);//����Z

	return 0;
}