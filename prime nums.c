#include<stdio.h>
int main()
{
    int flag,n,i;
    printf("Enter an integer:");
    scanf("%d",&n);
    flag=1;

    for(i=2;i<=(n-1);i++)

        if(n%i==0)
            flag=0;
        if(flag)
            printf("%d is a prime number",n);
        else
            printf("%d is not a prime number",n);

        return 0;
}
