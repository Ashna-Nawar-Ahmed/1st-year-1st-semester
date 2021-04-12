#include<stdio.h>
int main()
{

int r;
float area,circum;

printf("Enter radius of circle=");
scanf("%d",&r);

area=3.1416*r*r;
circum=2*3.1416*r;

printf("Area of circle=%f",area);
printf("\nCircumference of circle=%f",circum);

return 0;

}
