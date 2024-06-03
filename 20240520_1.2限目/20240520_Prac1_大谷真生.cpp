#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*とある食堂の月間の売り上げは？？

福岡市内にある健康を第一に考えたご飯を提供してくれるとある食堂
店主の1人のみで行なっているので、提供する食事も1日に25食までとなっています。

月の営業日は22日として、月の売り上げはいくらでしょうか？
※1日の食数はランダムで生成しましょう。
1食950円です。
*/

int main(void)
{
    //変数宣言
    int i; //ループカウント
    int meals;
    int days;
    int month =0;
    int sum=0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //ループ
    for (i = 0; i < 22; i++)
    {
        
        //食数の生成（ランダム）
        meals = rand() % 26;
        //一日の売り上げ計算
        days = meals * 950;
        printf("%d日目\n売れた食数:%d食\n1日の売上:%d円\n",i,meals,days);
        sum += meals;
        //月の売り上げ計算
        month += days;
    }

    //月の売り上げ表示
    printf("月の売り上げた食数:%d\n月の売り上げ:%d円\n",sum, month);

    return 0;
}