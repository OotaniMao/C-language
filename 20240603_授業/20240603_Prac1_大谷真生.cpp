#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*約数当てゲーム
ランダムで1〜50までの整数が生成されます。
プレイヤーはその整数を当てましょう。
ヒントとして、3つの約数が表示されます。
そのヒントを元に、正解をしましょう。
正解できるまで入力が可能です。*/

int main(void)
{
    //変数宣言
    int i=0;
    int player;
    int num;
    int count=0;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //乱数の生成10～50まで
    num = rand() % 50 + 10;
  
    //入力を促す
    printf("10～50までの整数が生成されるので当てましょう。\n");
    printf("ヒント:");
    //ヒントの表示
    while (count < 3 && i < num)
    {
        if (num % (i + 1) == 0)//約数
        {
            printf("%d,", i + 1);
            count = count + 1;
        }
        i = i + 1;
    }
    printf("\n");

    printf("%d\n", num);//確認
   
    //ゲームスタート
    while (1)
    {
        printf("予想:");
        scanf("%d", &player);

        //判定
        if (player == num)
        {
            printf("正解\n");
            break;//ループから抜ける
        }
        else
        {
            printf("不正解\n");
        }
    }
    
    return 0;
}