#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
#include<time.h>

/*野球盤Part3

ピッチャーとして相手チームを抑えましょう
持ち球は、0：ストレート　1：カーブ　2：スライダー　3：シンカーです。
CPUであるバッターは上記の番号をランダムで選択します。
同じ数字であれば打たれたとして75％の確率でヒットになり、25％の確率でアウトとなります。
ヒットが4回出たら負けになります。
違う数字なら75％の確率でストライクとなり、25％確率でボールとなります。
ボールは4つで1ヒットです。
ストライクは3つで1アウトです。
アウトは3つで勝利となります。
ヒット、アウトが出たらストライクとボールのカウントは0になります。*/

int main(void)
{
    //変数宣言
    int piture;
    int butter;
    int hit = 0;//hitの数
    int strike = 0;//strikeの数
    int out, boul;//乱数
    int out_count=0;//outの数
    int boul_count=0;//boolの数
    int count=0;//投げた回数
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //入力を促す
    printf("ピッチャーとして相手チームを抑えましょう\n持ち球は、0：ストレート　1：カーブ　2：スライダー　3：シンカーです\n");
    
    //判定（繰り返す）
    do
    {
        //何投目かを表示
        count = count + 1;
        printf("%d投目\n",count);
        //outになる確率
        out = rand() % 4;
        //boulになる確率
        boul = rand() % 4;
        //cpuの選択（ランダム）
        butter = rand() % 4;
        //playerの選択
        printf("ピッチャー:");
        scanf("%d", &piture);
        //バッターの選択を表示
        printf("バッター:%d\n", butter);
        //数値の範囲設定
        if (piture < 0 || 3 < piture)
        {
            printf("入力された数値に誤りがあります\n再度入力してください。\n");
            scanf("%d", &piture);
        }
        //判定
        if (piture == butter)//同数の時
        {
            if (out == 0)//アウト
            {
                printf("判定:OUT!\n");
                out_count = out_count + 1;
            }
            else//ヒット
            {
                printf("判定:HIT!!\n");
                hit = hit + 1;
            }
        }
        else//異なる数字の時
        {
            if (boul == 0)//ボール
            {
                printf("判定:BOOL\n");
                boul_count = boul_count + 1;
            }
            else//ストライク
            {
                printf("判定:STRIKE\n");
                strike = strike + 1;
            }
        }
        if (boul_count == 4)//ボール4回で1ヒット
        {
            hit = hit + 1;
        }
        else if (strike == 3)//ストライク3回で1アウト
        {
            out_count = out_count + 1;
        }
        if (piture == butter || boul_count == 4 || strike == 3)//ストライクとボールを0に戻す
        {
            strike = 0;
            boul_count = 0;
        }
        
    } while (hit<4&&out_count<3);
    //勝敗の判定結果表示
    if (hit == 4)
    {
        printf("OUT:%d\nHIT:%d\nYOU LOSE\n",out_count,hit);
    }
    else if (out_count == 3)
    {
        printf("OUT:%d\nHIT:%d\nYOU WIN\n", out_count, hit);
    }
    
    return 0;
}