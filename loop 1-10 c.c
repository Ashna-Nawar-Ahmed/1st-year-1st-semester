#include<stdio.h>
int main()
{
    int n;
    n=1;
    for(;;)
    {
        if(n>10)
            break;

        printf("%d",n);
        n=n+1;

    }

    return 0;
}
