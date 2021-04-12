#include<stdio.h>
int main()
{
    int i,n,m,sum,term;
    printf("Enter m=");
    scanf("%d",&m);

    sum=0;
    n=0;

    for(i=1;i<=m;i++)
    {
        term=(3*n)+1;
        sum=sum+term;
        n++;
    }
    printf("Sum=%d",sum);

    return 0;
}
