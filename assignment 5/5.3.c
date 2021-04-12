#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],i,j,r,c;
    printf("Enter no.of rows of matrix:");
    scanf("%d",&r);
    printf("Enter no.of columns of matrix:");
    scanf("%d",&c);
    printf("Enter elements for a %dX%d matrix: ",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    printf("New matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",b[i][j]);
        printf("\n");


    }
    return 0;
}
