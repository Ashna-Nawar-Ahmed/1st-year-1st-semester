#include<stdio.h>
int main()
{
    int choice,a,b;
    printf("Enter 2 integers: ");
    scanf("%d %d",&a,&b);
    printf("Enter choice, 1 for addition,2 for subtraction: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Result=%d",a+b);
        break;

    case 2:
        printf("Result=%d",a-b);
        break;

    default:
        printf("Invalid input.");
    }

    return 0;
}
