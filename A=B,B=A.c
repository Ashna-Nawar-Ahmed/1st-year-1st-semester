#include<stdio.h>
int main()
{
int a,b,t;

printf("Enter value of A=");
scanf("%d",&a);
printf("Enter value of B=");
scanf("%d",&b);
t=a;
a=b;
b=t;
printf("A=%d\nB=%d",a,b);

return 0;
}
