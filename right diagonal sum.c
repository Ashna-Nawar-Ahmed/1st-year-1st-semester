#include<stdio.h>
int main()
{
    int i,j,r,c,sum=0;
    printf("enter no. of rows and columns of square matrix;");
    scanf("%d %d",&r,&c);
    int a[r][c];
    printf("Enter integers:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i+j==r-1)
                sum+=a[i][j];
        }
    }
    printf("Sum of right diagonal=%d",sum);
    return 0;
}
