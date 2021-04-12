#include<stdio.h>
int main()
{
    int sq[10][10],i,j,n,sum1=0,sum2=0;
    printf("Enter no. of rows/columns of square matrix: ");
    scanf("%d",&n);
    printf("Enter integers for square matrix:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&sq[i][j]);
            if(i==j)
                sum1+=sq[i][j];
        }
    }
    printf("Sum of left diagonal=%d",sum1);
    for(i=n-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
        {
            if(i==j)
                sum2+=sq[i][j];
        }
    }
    printf("\nSum of right diagonal=%d",sum2);
    return 0;
}
