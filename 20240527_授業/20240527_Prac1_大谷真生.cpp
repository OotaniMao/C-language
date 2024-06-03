#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*数字当てゲーム

ランダムで0～100までの数字を当てるゲームを作成しましょう。
プレイヤーは数字を入力してその数字をあてます。
外れた場合、入力して数字が大きいか小さいかのヒントを表示しましょう。
プレイヤーは、数字が当てるまで解答できるようにしてください。*/

int main(void)
{
    //変数宣言
    int player, num;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //ランダムな数字の生成
    num = rand() % 101;

    //playerの入力を促す
    printf("数字当てゲーム\n0～100までの数字を入力して当ててください。\n");

    //判定・結果表示（繰り返し）
    while (num >= 0&&num<=100)
    {
        //playerの入力
        printf("予想:");
        scanf("%d", &player);

        //数値の範囲設定
        if (player < 0 || 100 < player)
        {
            printf("入力された数値に誤りがあります。\n再度入力してください。\n");
        }
        else
        {
            //判定
            if (player == num)//数値が同じ時正解
            {
                printf("正解！\n");
                break;          //正解したらそこでループから抜ける
            }
            else
            {
                printf("不正解\n");//数値が違うとき
                //ヒントの表示
                if (player < num)       //乱数は入力した数値以上
                {
                    printf("乱数は入力した数値以上です。\n");
                }
                else if (num < player)      //乱数は入力した数値未満
                {
                    printf("乱数は入力した数値未満です。\n");
                }
            }
        }
    }

    return 0;
}