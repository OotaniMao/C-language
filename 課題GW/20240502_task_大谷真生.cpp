#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*ランダムな数字を当てましょう。

ランダムな数字を生成します。
※数字の範囲は0〜15とします。
それを入力してあげましょう。
※ヒントとして、7よりも大きいか小さいかを表示しましょう。
正解したら「BING」を表示し、外れたら「Booo」を表示しましょう。
解答後は、何が正解かを表示しましょう。*/

int main(void)
{
	//変数宣言
	int radnumber;
	int num1;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	//ランダムな数字を生成
	radnumber = rand() % 16;

	//キーボード入力を促す
	printf("ランダムな数字が生成されるので当ててください。\n※範囲は0～15です。\n");

	//ヒント表示
	if (radnumber >= 7)
	{
		printf("ヒント：7以上\n");
	}
	else
	{
		printf("ヒント：7未満\n");
	}

	printf("予想 : ");
	scanf("%d", &num1 );

	//正誤判定・表示
	if ( num1 < 0 || 15 < num1)
	{
		printf("入力した数値に誤りがあります。\n");

		return 1;
	}

	//正誤判定・表示
	if (radnumber == num1)
	{
		printf("BINGO\n");
	}
	else
	{
		printf("Boooo\n");
	}
		
	//正解を表示
	printf("正解 : %d",radnumber);

	return 0;
}