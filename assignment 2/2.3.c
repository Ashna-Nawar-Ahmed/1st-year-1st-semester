#include<stdio.h>
int main()
{
    int n,i,factor;
    printf("Enter an integer number:");
    scanf("%d",&n);


    for(i=1,factor=1;i<=n;i++)
    factor=factor*i;

    printf("%d!=%d",n,factor);

    return 0;
}

