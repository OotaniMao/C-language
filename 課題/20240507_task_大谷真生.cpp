#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*Eゲーム


0:King(王様)　1:Citizen(市民)　2:Servant(下僕)とします。
CPUは、0:Kingか1:Citizenを選択します。
PLAYERは、1:Citeizenか2:Servantが選べます。
Playerが勝った時は、「PlayerWIN」を表示しましょう。
CPUが勝った時は、「CPUWIN」を表示しましょう。
同じなら「Draw」を表示します。 	
KingとCitizenでは、Kingの勝ちとなります。
CitizenとServantでは、Citizenの勝ちになります。
KingとServantでは、Servantが勝ちとなります。*/

int main(void)
{
    //変数宣言
    int cpu;
    int player;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    //cpuの選択（ランダム）
    cpu = rand() % 2;

    // キーボードからの入力を促す
    printf("Eゲーム！！\n整数を入力してCPUと対戦しよう！\n0：King　1：Citizen　2：Servant\nCPUは、0:Kingか1:Citizenを選択します。\nPLAYERは、1:Citeizenか2:Servantが選べます。\n");
    //確認用
   // printf("%d", cpu);

    printf("player : ");
    scanf("%d", &player);

    //数値の範囲設定
    if (player < 1 || 2 < player)
    {
        printf("入力された数値に誤りがあります。\n");

        return 1;
    }

    printf("CPU : %d\n", cpu);

    //勝敗の判定・表示

    int win1 = player - cpu;

    if ( win1 == 0)//引き分け
    {
        printf("DRAW！\n");
    }
    else
    {

        if ( win1 == 2) //playerが勝利するとき
        {
            printf("PLAYER WIN!!\n");
        }
        else
        {
            printf("CPU WIN!!\n");
        }
    }


    return 0;
}