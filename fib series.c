#include<stdio.h>
int main()
{
    int t0,t1,tn,i,n;
    printf("Enter n=");
    scanf("%d",&n);

    t0=0;
    t1=1;

    for(i=1;i<=n;i++)
    {
        tn=t1+t0;
        t0=t1;
        t1=tn;
    }
    printf("Nth term=%d",tn);

    return 0;
}
