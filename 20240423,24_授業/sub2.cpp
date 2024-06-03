#include<stdio.h>
//‚Q‚Â’Ç‰Á‚Ì‚¨‚Ü‚¶‚È‚¢
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int radNumber;

    //—”‚Ì‰Šú‰»
    srand((unsigned int)time(NULL));

    //for (int i = 0; i < 10; i++)
    //{
        radNumber = rand() % 16;
        printf("ƒ‰ƒ“ƒ_ƒ€‚È”š‚Í%d‚Å‚·\n", radNumber);
    //}

    return 0;
}