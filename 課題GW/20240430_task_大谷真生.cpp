#include<stdio.h>
#pragma warning(disable:4996)

/*キーボード入力を使用しましょう。

キーボードから数字を2つ入力しましょう。
入力した数字を、足し算、引き算、掛け算、割り算を行いましょう。
結果を画面に出力しましょう。*/

int main(void)
{
	//変数宣言
	double num1;
	double num2;
	//キーボードから入力を促す
	printf("任意の数字を二つ入力してください\n");
	printf("a = ");
	scanf("%f", &num1);
	printf("b = ");
	scanf("%f", &num2);
	//計算＆結果表示
	printf("a + b = %f\n", num1 + num2);//足し算
	printf("a - b = %f\n", num1 - num2);//引き算
	printf("a * b = %f\n", num1 * num2);//掛け算
	printf("a / b = %f\n", num1 / num2);//割り算

	return 0;
}