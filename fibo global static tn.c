#include<stdio.h>
int global_val(int x);
int t0=0,t1=1,tn;
int main()
{
    int n,sum;
    printf("Enter number of terms: ");
    scanf("%d",&n);

    sum=global_val(n);
    printf("Sum using global variables= %d",sum);

    return 0;
}
int global_val(int x)
{
    int sum=0,i;
    for(i=2;i<=x;i++)
    {
        tn=t1+t0;
        t0=t1;
        t1=tn;

    }

    return tn;
}

