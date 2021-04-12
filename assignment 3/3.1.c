#include<stdio.h>
int main()
{
    int a[10],i,odd[10],even[10],j=0,k=0,maxOdd,maxEven;
    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
                {
                even[j]=a[i];
                j++;
                }
            else
                {
                odd[k]=a[i];
                k++;
                }
        }

        maxOdd=odd[0];maxEven=even[0];

        for(i=0;i<j;i++)
        {
            if(maxEven<even[i])
                maxEven=even[i];

        }

        for(i=0;i<k;i++)
        {
            if(maxOdd<odd[i])
                maxOdd=odd[i];
        }

        printf("Maximum odd number= %d & Maximum even number= %d",maxOdd,maxEven);

        return 0;

}
