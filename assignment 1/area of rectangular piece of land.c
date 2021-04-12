#include<stdio.h>
int main()
{
float l,b,area;

printf("Enter length of rectangular piece of land(in ft)=");
scanf("%f",&l);
l=0.3048*l;

printf("Enter breadth of rectangular piece of land(in ft)=");
scanf("%f",&b);
b=0.3048*b;

area=l*b;
printf("Area of rectangular piece of land(in m)=%f",area);

return 0;
}
