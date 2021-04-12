#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter highest integer: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        {
            for(j=1,printf("(");j<=i;j++)
                printf("%d+",j);
            if(i<n)
            printf("\b)+");
            else
            printf("\b)");
        }


    return 0;
}
