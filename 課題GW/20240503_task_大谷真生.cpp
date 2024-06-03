#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/* 奇数か偶数か、大きいか小さいか

整数を入力します。
それと同時にランダムで整数を作成します。
※数字の範囲は、0〜100までとします。
入力した数字が、ランダムよりも大きいか小さいかを判定して入力しましょう。
ランダムな数字と入力した数字を足したら、偶数になるか奇数になるか判定し表示しましょう。 */

int main(void)
{
	//変数宣言
	int radnumber;
	int num1;

	//乱数初期化
	srand((unsigned int)time(NULL));

	//ランダムな数字を生成
	radnumber = rand() % 101;

	//キーボード入力を促す
	printf("任意の整数を入力してください。\n※範囲は0～100とします。\n");
	printf("X = ");
	scanf("%d", &num1 );
	printf("Y = %d\n", radnumber);

	//数値の範囲設定
	if ( num1 < 0 || 100 < num1)
	{
		printf("入力に誤りがあります\n");

		return 1;
	}

	//数値の大小関係の判定・表示
	if (radnumber <= num1)
	{
		printf("%dは%d以上である\n", num1, radnumber);
	}
	else
	{
		printf("%dは%d未満である\n", num1, radnumber);
	}

	int sum1 = num1 + radnumber;//計算

	//計算結果の奇数偶数の判定・表示
	if (sum1 % 2 == 0)
	{
		printf("%d + %d = %d は偶数\n", num1, radnumber, sum1);
	}
	else
	{
		printf("%d + %d = %d は奇数\n", num1, radnumber, sum1);
	}

	return 0;
}