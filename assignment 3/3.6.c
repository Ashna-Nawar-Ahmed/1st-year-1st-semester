#include<stdio.h>
#include<math.h>
float seriesVal(int a,int b);
int factorVal(int m);
int main()
{
    int x,n;
    float sum;
    printf("Enter values of x & n:\n");
    scanf("%d\n%d",&x,&n);

    sum=seriesVal(x,n);

    printf("Sum of the series= %f",sum);

    return 0;
}

float seriesVal(int a,int b)
{
    float sum=0,term;
    int i,fact;

    for(i=1;i<=b;i++)
    {
        fact=factorVal(i);
        term=pow(a,2*i)/fact;
        sum+=term;
    }
    return sum;
}

int factorVal(int m)
{
    int fact=1,i;
    for(i=1;i<=m;i++)
        fact=fact*i;


    return fact;
}
