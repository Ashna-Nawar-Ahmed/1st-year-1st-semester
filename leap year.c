#include<stdio.h>
int main()
{
int yr;
printf("Enter a year=");
scanf("%d",&yr);

if (yr%100!=0&&yr%4==0||yr%100==0&&yr%4==0)

    printf("Given year is a leap year.");

else printf("Given year is not a leap year.");

return 0;
}
