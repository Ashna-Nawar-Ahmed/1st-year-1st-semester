#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter length of each arm: ");//5
    scanf("%d",&n);

    n=n*2-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i||j==(n-i+1))
                printf("*");
            else printf(" ");
        }
         printf("\n");
    }
    return 0;
}
