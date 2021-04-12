#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define pi 2*acos(0)
int main(void)
{
float b,h,r,a1,a2,p,c;
printf("Enter breadth of rectangle:");
scanf("%f",&b);
printf("Enter height of rectangle:");
scanf("%f",&h);
printf("Enter radius of circle:");
scanf("%f",&r);

a1=b*h;
a2=pi*r*r;
p=2*(b+h);
c=2*pi*r;

printf("Area of rectangle=%f",a1);
printf("Area of circle=%f",a2);
printf("Perimeter of rectangle=%f",p);
printf("Circumference of circle=%f",c);

return 0;
}
