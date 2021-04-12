#include<stdio.h>
int main()
{
    int n,i,cnt,j;
    scanf("%d",&n);
     for(i=1;i<=n;i++)
    {
        for(j=i;j!=0;j=j/10)
        {
            if(j%10==1)
            {
                cnt++;

            }
            else if(j==1)
                cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
