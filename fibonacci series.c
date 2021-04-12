#include<stdio.h>
int main()
{
    int tPn,tP0,tP1,n,cnt;

    printf("Enter desired index of series:");
    scanf("%d",&n);


    for(tP0=0,tP1=1,cnt=1;cnt<n;cnt=cnt+1)
    {
        tPn=tP0+tP1;
        tP0=tP1;
        tP1=tPn;


    }

    printf("%d",tPn);
    return 0;

}
