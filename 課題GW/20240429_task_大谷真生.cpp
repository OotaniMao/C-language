#include <stdio.h>

/*�ϐ����g���Ă݂悤

�����^�̕ϐ�X�AY��p�ӂ��܂��B
���̕ϐ��ɁAX��60�AY��45�������܂��B
�������A�����Z�A�����Z�A�|���Z�A����Z�A��Z���s���A��������ʂɏo�͂��܂��傤�B*/
int main(void)
{
	//�ϐ��錾
	int X = 60;
	int Y = 45;
	//�v�Z�����ʕ\��
	printf("X + Y = %d\n", X + Y);//�����Z
	printf("X - Y = %d\n", X - Y);//�����Z
	printf("X * Y = %d\n", X * Y);//�|���Z
	printf("X / Y = %d\n", X / Y);//����Z
	printf("X % Y = %d\n", X % Y);//��Z

	return 0;
}