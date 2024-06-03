#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*月の日数を表示

1～12月までの日数を表示するプログラミングを作成しましょう。
キーボードから数字を入力してください。
入力した月の日数を表示してください。
例：
入力→3
3月の日数は、31日です。
※入力以外は、「入力に誤りがあります。」を表示させてください。*/

int main(void)
{
    //変数宣言
    int month;
    int year;
    //キーボードから入力を促す
    printf("1～12月のいずれかの日数を入力してください。\nYOU:");
    scanf("%d", &month);
    //月からの日数判定・表示
    switch (month)
    {
    case 2:
        printf("西暦を入力してください。\n");
        scanf("%d", &year);
        if (0 < year)
        {
            //うるう年
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                printf("%d年はうるう年なので、29日です。\n",year);
            }
            else
            {
                printf("%d年は通常年なので、28日です。\n", year);
            }
        }
        else
        {
            printf("紀元前となるため、分かりません。\n%d月の日数は28日or29日です。\n", month);
        }
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d月の日数は、31日です。\n",month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("4月の日数は、30日です。\n",month);
        break;
    default:
        //入力外
        printf("入力に誤りがあります。\n");
        break;
    }

    return 0;
}