#include<stdio.h>
int main(void)
{
float a,b;
int sum;
a=2;
b=5;
sum=(b-a+1)*(a+b)/2;
scanf("%d",&a);
scanf("%f",&b);
printf("%d+%f=%d",a,b,sum);

return 0;
}
