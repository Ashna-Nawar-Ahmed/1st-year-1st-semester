#include<stdio.h>
int main()
{
    int num,d1,d2,d3,rem1;

    printf("Please enter a three digit integer=");
    scanf("%d",&num);

    if(num>=100&&num<=999)
    {
        d1=num/100;rem1=num%100;
        d2=rem1/10;d3=rem1%10;

        printf("Sum of the digits=%d",d1+d2+d3);
    }

    else
        printf("Invalid input.");

    return 0;
}
