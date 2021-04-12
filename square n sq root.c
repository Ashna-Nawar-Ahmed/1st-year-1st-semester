#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter an integer:");
    scanf("%d",&n);

    printf("Square\t\tSquare Root\n");
    for(i=1;i<=n;i++)
        printf("%d\t\t%f\n",i*i,sqrt(i));

    return 0;
}
