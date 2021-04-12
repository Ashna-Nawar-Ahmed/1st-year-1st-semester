#include<stdio.h>
int main()
{
    int a[5],i,var=0;
    printf("Enter a 5 digit integer");
    for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=a[4-i])
                var=1;
                break;
        }

        if(var)
            printf("It is not a palindrome number");
         else
            printf("It is a palindrome number");



    return 0;
}
