#include<stdio.h>
int main()
{

    int cnt,n,tp0,tp1,tpn;
    printf("Please enter desired index of series,n=");
    scanf("%d",&n);

    for(tp0=0,tp1=1,cnt=1;cnt<n;cnt=cnt+1)
    {
        tpn=tp0+tp1;
        tp0=tp1;
        tp1=tpn;


    }
printf("Required term=%d",tpn);

    return 0;
}

