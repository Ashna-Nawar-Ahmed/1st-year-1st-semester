#include<stdio.h>
int main()
{
float sal,tot;

printf("Enter salary=");
scanf("%f",&sal);

tot=sal+((sal*30)/100)+((sal*5)/100)+1000;
printf("Gross Salary=%f",tot);

return 0;
}
