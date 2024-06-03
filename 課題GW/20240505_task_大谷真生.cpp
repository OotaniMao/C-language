#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*バッティングゲーム

数字を0:ストレート1:カーブ2:フォークとしてバッターとの対戦を行いましょう。
プレイヤーは、ピッチャーとなり上記のボールを投げます。
CPUはランダムでそれを打ってきます。
同じ数字であればヒットとされゲームに負けます。
違う数字ならバッターが打てなかったと言う事で勝ちとなります。*/

int main(void)
{
	//変数宣言
	int Butter;
	int Pitture;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	//バッターの選択（ランダム）
	Butter = rand() % 3;

	//キーボードからの入力を促す
	printf("バッティングゲーム\nピッチャーとしてバッターと対戦しましょう。\n0:ストレート　1:カーブ　2:フォーク\n");
	printf("ピッチャー：");
	scanf("%d", &Pitture);

	//数値の範囲設定
	if (Pitture < 0 || 2 < Pitture)
	{
		printf("入力した数値に誤りがあります。\n");

		return 1;
	}

	//バッターの選択を表示
	printf("バッター: %d\n", Butter);

	//勝敗の判定・表示
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