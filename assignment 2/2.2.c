#include<stdio.h>
#include<math.h>
int main()
{
    int n,d1,d2,d3,rem,sum;
    printf("Enter a three digit integer number:");
    scanf("%d",&n);

    if(n>99&&n<1000)
    {
        d1=n/100;rem=n%100;
        d2=rem/10;
        d3=rem%10;

        sum=pow(d1,3)+pow(d2,3)+pow(d3,3);

        if(sum==n)
            printf("%d is an Armstrong number.",n);

        else
            printf("%d is not an Armstrong number.",n);
    }
    else
        printf("Invalid input.");

    return 0;
}
