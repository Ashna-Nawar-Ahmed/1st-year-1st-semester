#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("Enter dividend:");
    scanf("%d",&a);

    printf("Enter divisor:");
    scanf("%d",&b);

    rem=a-((a/b)*b);

    printf("%d",rem);

    return 0;

}
