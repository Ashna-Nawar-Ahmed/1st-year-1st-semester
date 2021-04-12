#include<stdio.h>
float grossSal(int basicSal,int houseRent);
int main()
{
    int basic,house;
    float gross;
    printf("Enter basic salary: ");
    scanf("%d",&basic);
    printf("\nEnter percentage of basic salary that is the house rent: ");
    scanf("%d",&house);

    gross=grossSal(basic,house);

    printf("\nGross salary is %f",gross);

    return 0;
}

float grossSal(int basicSal,int houseRent)
{
    float grossTot=(basicSal+(houseRent*basicSal)/100);
    return grossTot;
}
