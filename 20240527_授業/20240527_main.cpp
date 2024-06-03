#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //•Ï”éŒ¾  
    int n;
    //“ü—Í‚ð‘£‚·
    printf("®”‚ð“ü—Í:");
    scanf("%d", &n);
    //ðŒŽ®‚ª¬—§‚·‚éŒÀ‚èŒJ‚è•Ô‚·
    while (n > 0)
    {
        printf("%d",n);//•\Ž¦
        n = n - 1;
    }

    return 0;
}