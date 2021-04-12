#include<stdio.h>
int main()
{
float r,area,circum;
printf("Enter value of radius:");
scanf("%f",&r);

area=3.1416*r*r;
circum=2*3.1416*r;

printf("Area=%f",area);
printf("\nCircumference=%f",circum);

return 0;
}
