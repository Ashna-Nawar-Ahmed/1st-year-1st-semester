#include<stdio.h>
int main()
{
    int t1,t2,tn,count,n;

    printf("Enter index,n=");
    scanf("%d",&n);

    for(t1=0,t2=1,count=0;count<(n-1);count=count+1)
    {
        tn=t1+t2;
        t1=t2;
        t2=tn;
    }
    printf("Required term=%d",tn);

    return 0;

}
