#include<stdio.h>
int t1=0,t2=1,tn;
void global_fibo(int x);
int stat_fibo(int x);
int main(void)
{
    int n,i,gSum=1,sSum;
    printf("Enter number of terms: ");
    scanf("%d",&n);


    for(i=2; i<=n; i++)
        {
            global_fibo(i);
            gSum+=tn;
        }
        printf("\nSum using global variable= %d",gSum);

    for(i=2; i<=n; i++)
        sSum=stat_fibo(i);

    printf("\nSum using static variable= %d\n",sSum);

    return 0;
}


void global_fibo(int x)
{

    tn=t1+t2;
    t2=t1;
    t1=tn;

}

int stat_fibo(int x)
{
    int i,t1=0,t2=1;
    static int sum=1;
    for(i=2; i<=x; i++)

        {
            tn=t1+t2;
            t2=t1;
            t1=tn;
        }
        sum+=tn;
    return sum;
}
