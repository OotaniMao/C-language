#include<stdio.h>
#pragma warning(disable:4996)

/*ゲームの概要:

プレイヤーは整数を入力します。
プログラムはその整数が素数かどうかを判定します。
プレイヤーは次に整数を入力し、素数かどうかを当てます。
プレイヤーが正解したら「正解！」と表示し、次の整数を入力するように促します。
プレイヤーが間違えたら「不正解です。」と表示し、再度同じ数の素数判定を行うように促します。
プレイヤーが0を入力したらゲームを終了します。*/

int main(void)
{
    //変数宣言
    int player_num, i,player,memory;

    //入力
    printf("整数を入力してください\nまた0を入力するとゲーム終了です。\n整数:");
   
    while (1)
    {
        scanf("%d", &player_num);
        //ゲーム終了条件
        if (player_num == 0)
        {
            printf("ゲーム終了\n");
            break;
        }
        //素数判定
        for (i = 2; i < player_num; i++)
        {
            if (player_num % i == 0)
            {
                break;
            }
        }
        if (player_num == i)
        {
            memory = 1;
        }
        else
        {
            memory = 2;
        }
        //素数かどうかを入力させる
        printf("先ほど入力した数字が素数かどうか当ててください\n素数:1 素数でない:2\n予想:");
        scanf("%d", &player);
        //ゲーム終了条件
        if (player == 0)
        {
            printf("ゲーム終了\n");
            break;
        }
        //正誤判定
        while (1)
        {
            if (memory == player)
            {
                printf("正解!\n次の整数を入力してください\n整数:");
                
                break;
            }
            else
            {
                printf("不正解です。\nもう一度素数判定を行ってください\n素数:1 素数でない:2\n予想:");
                scanf("%d", &player);
            }
        }

    }
    
    return 0;
}