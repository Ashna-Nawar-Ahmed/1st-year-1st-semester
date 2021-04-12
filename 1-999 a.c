#include<stdio.h>
int main()
{
    int n;
    n=1;
    for(;;)
    {
        if(n>999)
            break;
        printf("%d\t",n);
        n=n+5;
    }

    return 0;
}
