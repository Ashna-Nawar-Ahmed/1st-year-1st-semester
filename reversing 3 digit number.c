#include<stdio.h>
int main()
{
int num1,div1,div2,rem1,rem2,newnum;
printf("Enter a 3 digit integer number=");
scanf("%d",&num1);
if(num1>=100)
{
    if(num1<=999)
        {
        div1=num1/100;rem1=num1%100;
        div2=rem1/10;rem2=rem1%10;
        newnum=(rem2*100)+(div2*10)+div1;

        printf("Reverse of given number is=%d",newnum);
        }

    else
        printf("Input is too big.");
}
    else
       printf("Input is too small.");

    return 0;
}
