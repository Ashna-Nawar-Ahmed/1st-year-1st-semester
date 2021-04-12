#include<stdio.h>
int main()
{
    int n,t1,tn,cnt,sum;
    printf("Enter value of n=");
    scanf("%d",&n);

    t1=1;
    sum=0;
    cnt=1;
    n>=2;

    while(cnt<n)
    {
        tn=(2*t1)+3;
        sum=sum+tn;
        t1=tn;
        cnt++;
    }
    printf("Sum=%d",sum);

    return 0;
}
