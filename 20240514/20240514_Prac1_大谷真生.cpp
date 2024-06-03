#include<stdio.h>
#pragma warning(disable:4996)

/*成績表を作成しましょう。

学生の試験結果を表す、次のメンバーを持った構造体を定義しましょう。
名前（char[128]）
点数（int）
成績評価（char）
作成した構造体の変数に、名前と試験の得点をキーボードから入力しましょう。
成績評価は以下のとおりです。
S→90点以上
A→90点未満70点以上
B→70点未満50点以上
C→50点未満30点以上
D→30点未満
構造体の内容を表示する。*/

typedef struct Test
{
    char name[128];//名前
    int score;//点数
    char grades;//成績評価
}Test;

int main(void)
{
    //構造体を変数にする
    Test test;

    //入力
    printf("名前を入力してください。\n");
    scanf("%s", &test.name);
    printf("試験の得点を入力してください。\n");
    scanf("%d", &test.score);
    
    //数値の範囲設定
    if (test.score < 0 || 100 < test.score)
    {
        printf("入力された数値に誤りがあります。\n");

        return 1;
    }

    //成績評価（判定）
    if (test.score >= 90)
    {
        test.grades ='S';
    }
    else if (test.score < 90 && test.score >= 70)
    {
        test.grades ='A';
    }
    else if (test.score < 70 && test.score >= 50)
    {
        test.grades = 'B';
    }
    else if (test.score < 50 && test.score >= 30)
    {
        test.grades = 'C';
    }
    else
    {
        test.grades = 'D';
    }

    //結果表示
    printf("名前:%s\n得点:%d\n成績評価:%c\n",test.name,test.score,test.grades);


    return 0;
}