#include<stdio.h>
int main()
{
    int n,i,j,space;
    printf("Enter length of each arm: ");
    scanf("%d",&n);
    n--;space=n;
for(i=0;i<=n;i++)
    {
        for(j=0;j<space;j++)
            printf(" ");
        for(j=1;j<=2*i+1;j++)
        {
            if(i==0)
                printf("*");
            else if(j==1||j==2*i+1)
                printf("*");
            else printf(" ");
        }
        space--;
        printf("\n");
    }

    return 0;
}

