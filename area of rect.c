#include<stdio.h>
int main()
{
float l,b,area;
printf("Length of rectangle in ft=");
scanf("%f",&l);
printf("Breadth of rectangle in ft=");
scanf("%f",&b);

l=0.3048*l;
b=0.3048*b;

area=l*b;
printf("Area in square meter=%f",area);

return 0;
}
