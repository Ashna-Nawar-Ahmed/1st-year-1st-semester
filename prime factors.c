#include<stdio.h>
int main()
{
    int i=2,n,ar[100],j=0;
    printf("Enter number:");
    scanf("%d",&n);
    while(i<=n/2)
    {
       if(n%i==0)
          {
              ar[j]=i;
              j++;
              n=n/i;
          }
       else
        i++;

    }
    ar[j]=i;
    printf("Prime factors: ");
    for(i=0;i<=j;i++)
        printf("%d ",ar[i]);
    return 0;
}
