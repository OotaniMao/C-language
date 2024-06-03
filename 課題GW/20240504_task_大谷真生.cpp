#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*数当てゲームVar2
0～15までのランダムな整数を作成しなさい。
プレイヤーはキーボードからどんな数字なのかを入力し答えを当ててください。
正解なら「BING」、±3いないなら「Near」、それ以外なら「Loser」を表示しなさい。*/

int main(void)
{
	//変数宣言
	int radnumber;
	int num1;

	//乱数初期化
	srand((unsigned int)time(NULL));

	//ランダムな数字を生成
	radnumber = rand() % 16;

	//キーボードからの入力を促す
	printf("ランダムに生成される整数を当ててください。\n※範囲は0～15です。\n");
	printf("予想：");
	scanf("%d", &num1 );

	//数値の範囲設定
	if (num1 < 0 || 15 < num1)
	{
		printf("入力した数値に誤りがあります。\n");

		return 1;
	}

	//正誤判定・結果表示
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

	//ランダムな数字を表示
	printf("正解：%d", radnumber);

	return 0;
}