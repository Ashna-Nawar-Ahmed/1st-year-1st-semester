#include <stdio.h>
int main(void)
{
int i, n, flag;
printf("\nEnter a positive integer:");
scanf("%d", &n);
flag = 1;
     for(i=2; i*i <= n; i++)
     if(n % i == 0)
     flag = 0;
     if(flag)
     printf("\n%d is a prime!\n\a\a\a", n);
     else
     {
     printf("\n%d is not a prime!",n);
     printf("\nTry with another number!\n");
     }
    return 0;
    }
