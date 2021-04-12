#include<stdio.h>
int main()
{
float C,F;
printf("Enter temp in Fahrenheit=");
scanf("%f",&F);

C=((F-32)/9)*5;

printf("temp in Centigrade=%f",C);

return 0;
}
