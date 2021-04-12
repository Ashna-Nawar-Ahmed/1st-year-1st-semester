#include<stdio.h>
int main()
{
    int a,b;
    char op;

    printf("Enter an operation(+,-,*,/):");
    scanf("%c",&op);

    printf("Enter two integers:\n");
    scanf("%d%d",&a,&b);

    switch(op)
    {
    case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
    case '*':
        printf("%d*%d=%d",a,b,a*b);
        break;
    case '/':
        printf("%d/%d=%d",a,b,a/b);
        break;

    default:
        printf("Invalid Input!");
    }

    return 0;
}
