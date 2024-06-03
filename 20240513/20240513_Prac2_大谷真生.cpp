﻿#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*RPGのステータスを作成しましょう。

・性別、種族（人間、エルフ、ドワーフ、ホビット）を入力します。
※性別、種族は選択形式にしましょう
※種族の選択̪は0：人間 1：エルフ 2：ドワーフ 3:ホビット
※性別は、0：男　1：　女
体力、魔力、攻撃力、防御力、素早さはランダムで生成しましょう
※体力、魔力の範囲は（18～55）
※攻撃力、防御力、素早さの範囲は（5～30）

種族修正として、以下の内容に修正します。
人間：全ての数値に+2
エルフ：魔力・素早さ+8、体力・攻撃力・防御力-3
ドワーフ：攻撃力・防御力+8、魔力・素早さ-8
ホビット：体力・素早さ+8、防御力・魔力-4
※修正されて、数値が最低数値を下回った場合、最低数値に変更しましょう。

ステータスは構造体で作成しましょう。*/

typedef struct status
{
    int gender;//性別
    int race;//種族
    char name[128];//名前
    int HP;//体力
    int MP;//魔力
    int ATK;//攻撃力
    int DEF;//防御力
    int AGL;//素早さ

}status;

int main(void)
{
    //構造体を変数として定義
    status chara; 
    //キーボードから入力を促す
    printf("RPGのステータスを作成\n");
    printf("名前の入力をしてください。\nname:");
    scanf("%s", &chara.name);
    printf("RPGのステータスを作成\n性別の選択\n0：男　1：　女\n性別：");
    scanf("%d", &chara.gender);
    printf("種族の選択\n0：人間 1：エルフ 2：ドワーフ 3:ホビット\n種族：");
    scanf("%d", &chara.race);
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //乱数生成
    chara.HP = (rand() % 38 ) +18;//体力
    chara.MP = (rand() % 38 ) + 18;//魔力
    chara.ATK = (rand() % 26 ) + 5;//攻撃力
    chara.DEF = (rand() % 26 ) + 5;//防御力
    chara.AGL = (rand() % 26 ) + 5;//素早さ

    switch (chara.race)
    {
    case 0://人間
        chara.HP += 2;
        chara.MP += 2;
        chara.ATK += 2;
        chara.DEF += 2;
        chara.AGL += 2;
        break;
    case 1://エルフ
        chara.MP += 8;
        chara.HP -= 3;
        chara.ATK -= 3;
        chara.DEF -= 3;
        chara.AGL += 8;
        break;
    case 2://ドワーフ
        chara.MP -= 8;
        chara.ATK += 8;
        chara.DEF += 8;
        chara.AGL -= 8;
        break;
    case 3://ホビット
        chara.HP += 8;
        chara.MP -= 4;
        chara.DEF -= 4;
        chara.AGL += 8;
        break;

    }
    //修正
    if (chara.HP < 15)
    {
        chara.HP = 15;
    }
    else if(chara.MP < 15)
    {
        chara.MP = 15;
    }
    else if (chara.ATK < 5)
    {
        chara.ATK = 5;
    }
    else if (chara.DEF < 5)
    {
        chara.DEF = 5;
    }
    else if (chara.AGL < 5)
    {
        chara.AGL = 5;
    }
    //表示
    printf("キャラクターが完成しました。\n名前:%s\n", chara.name);

    switch (chara.gender)//性別
    {
    case 0:
        printf("性別:男性\n");
        break;
    case 1:
        printf("性別:女性\n");
        break;
    }

    switch (chara.race)//種族
    {
    case 0:
        printf("種族:人間\n");
        break;
    case 1:
        printf("種族:エルフ\n");
        break;
    case 2:
        printf("種族:ドワーフ\n");
        break;
    case 3:
        printf("種族:ホビット\n");
        break;
    }

    printf("体力:%d\n魔力:%d\n攻撃力:%d\n防御力:%d\n素早さ:%d\n", chara.HP, chara.MP, chara.ATK, chara.DEF, chara.AGL);

    return 0;
}