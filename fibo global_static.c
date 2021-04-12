#include<stdio.h>

void fibo(int x); int Sfibo(int x);

int newT; int main(void) {     int n,i,sum=1,sSum;      printf("Enter number of terms: ");     scanf("%d",&n);

    for(i=2; i<=n; i++)     {         fibo(i);         sum+=newT;     }     printf("\nSum using global variable= %d",sum);

    for(i=2; i<=n; i++)         sSum=Sfibo(i);

    printf("\nSum using static variable= %d\n",sSum);

    return 0; }


void fibo(int x) {     int pv1=1,pv2=0,i;     for(i=2; i<=x; i++)     {         newT=pv1+pv2;         pv2=pv1;         pv1=newT;     } }

int Sfibo(int x) {     int pv1=1,pv2=0,i;     static int sum=1;     for(i=2; i<=x; i++)     {         newT=pv1+pv2;         pv2=pv1;         pv1=newT;     }     sum+=newT;     return sum; }
