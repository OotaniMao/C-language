#include<stdio.h>
#pragma warning(disable:4996)

/*個数を示す数値を入力し、その個数分だけ 0 ～ 9 の数字を表示するプログラムを作成しなさい。
数字は 0 , 1 , 2 , 3 , , の順に表示し、9 の次は 0 に戻るものとします。

*/
int main(void)
{
    //変数宣言
    int ply_num;//入力される数字
    int i;
    //入力を促す
    printf("数字を入力してください\n");
    scanf("%d", &ply_num);
    //ループ（入力された数字の数だけ）
    for (i = 0; i < ply_num; i++)
    {
        printf("\n%d,", i%10);//iを10で割った余りを算出
    }


    return 0;
}