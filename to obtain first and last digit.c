#include<stdio.h>
int main()
{
    int num,firstdig,lastdig,a,b,sum;

    printf("Enter a 4 digit integer=");
    scanf("%d",&num);

    if(num>=1000)
    {
        if (num<=9999)
        {
            firstdig=num/1000;
            a=num%1000;
            b=a%100;
            lastdig=b%10;
            sum=firstdig+lastdig;

            printf("Sum of first and last digits=%d\n",sum);
        }

        else
            printf("Input is too big.");
    }

    else

         printf("Input is too small.");

    return 0;
}
