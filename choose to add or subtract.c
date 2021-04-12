#include<stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter two integers=");
    scanf("%d %d",&a,&b);
    printf("Please choose:\n1 for addition\n2 for subtraction\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Sum=%d",a+b);
                    break;

    case 2:
        printf("Difference=%d",a-b);
                    break;

    default:
        printf("Invalid Input.");

    }

    return 0;

}
