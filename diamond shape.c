#include<stdio.h>
int main()
{
    int i,n,j,k;
    printf("n=");
    scanf("%d",&n);
    for(i=0;i<2*n-1;i++)
    {
        for(k=0;k<n-i;k++)
        printf(" ");
        for(j=0;j<2*n+1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
