#include<stdio.h>
int main()
{
    int n;
    n=1;
    for(;;n=n+3)
    {
        if(n>999)
            break;
        printf("%d\t",n);
    }

    return 0;
}
