#include<stdio.h>
#pragma warning(disable:4996)

/*サイズを示す数値を入力し、何等かの文字で例のような三角形を表示するプログラムを作成しなさい。*/

int main(void)
{
	//変数定義
	int size;
	int i{};
	int j{};

	//数値の入力を促す
	printf("三角形のサイズを入力してください。\n");
	scanf("%d", &size);

	//三角形を表示させる
	for (i = 0; i < size; i++)
	{
		//空白を表示させる
		for (j = 0; j < size - i; j++)
		{
			printf(" ");
		}
		//Xを表示させる
		for (j = 0; j < (i*2+1); j++)
		{
			printf("X");
		}
		printf("\n");//改行
	}


	return 0;
}