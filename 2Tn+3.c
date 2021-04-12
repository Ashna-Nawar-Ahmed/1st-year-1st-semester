#include<stdio.h>
 int main()

{
    int n,sum,tn,t1,i;
    printf("Enter n(n>=2):");
    scanf("%d",&n);

    t1=1;
    sum=0;
    if(n>=2)
    {
        for(i=1;i<n;i++)
        {
            tn=(2*t1)+3;
            sum=sum+tn;
            t1=tn;

        }
        printf("Sum=%d",sum);
    }
    return 0;
}
