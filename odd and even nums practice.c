#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter starting value:\n");
    scanf("%d",&a);
    printf("Enter ending value:\n");
    scanf("%d",&b);

    printf("Even numbers between the ranges:");

    for(i=1;i<=b;i++)
    {
        if(a%2==0)
            printf("%d\t",a);
        a++;

        else
            printf("Odd numbers between the ranges:")
    }
}
