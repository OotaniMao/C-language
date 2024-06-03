#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int Pitture;
    int Batter;
    printf("野球盤ゲーム\nピッチャーから投げられる球を打ち返しましょう\n0:ストレート　1:カーブ　2:スライダー\n");
    
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //ピッチャーの選択（ランダム）
    Pitture= rand() % 3;

    //プレイヤー（バッター）の入力
    scanf("%d", &Batter);
    //HitかOutを判定・表示
    printf("ピッチャーは%dでした。\n", Pitture);

    if (Pitture == Batter)
    {
        printf("Hit\n");
    }
    else
    {
        printf("Out\n");
    }
    

    return 0;
}