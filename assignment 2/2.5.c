#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter starting value:\n");
    scanf("%d",&a);
    printf("\nEnter ending value:\n");
    scanf("%d",&b);

        printf("\nEven numbers in given range are: ");
         for(i=a;i<=b;i++)
         {
             if(i%2==0)
                printf("%d\t",i);


         }

        printf("\n\nOdd numbers in given range are: ");
         for(i=a;i<=b;i++)
         {
             if(i%2!=0)
                printf("%d\t",i);

         }

    return 0;
}
