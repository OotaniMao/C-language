#include <stdio.h>

/*変数を使ってみよう

整数型の変数X、Yを用意します。
その変数に、Xに60、Yに45を代入します。
それらを、足し算、引き算、掛け算、割り算、剰算を行い、答えを画面に出力しましょう。*/
int main(void)
{
	//変数宣言
	int X = 60;
	int Y = 45;
	//計算＆結果表示
	printf("X + Y = %d\n", X + Y);//足し算
	printf("X - Y = %d\n", X - Y);//引き算
	printf("X * Y = %d\n", X * Y);//掛け算
	printf("X / Y = %d\n", X / Y);//割り算
	printf("X % Y = %d\n", X % Y);//剰算

	return 0;
}