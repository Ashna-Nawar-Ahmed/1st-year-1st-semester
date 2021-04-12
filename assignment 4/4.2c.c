#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter no.of rows: ");//4
    scanf("%d",&n);

    for(i=1;i<=7;i++)
            printf("*");
        printf("\n");
    n=n-2;
    for(i=1;i<=n;i++)
    {
        printf("*");

        for(j=1;j<=5;j++)
            printf(" ");
        printf("*");
        printf("\n");
    }
    for(i=1;i<=7;i++)
            printf("*");
    return 0;
}
