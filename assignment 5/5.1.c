#include<stdio.h>
int main()
{
    int i,j,k,r,t;
    for(i=1;i<=1000;i++)
    {
      for(j=i+1;j<=1000;j++)
      {
          r=i*i+j*j;
        for(k=i+2;k<=1000;k++)
        {
          if(r==k*k)
            printf("Pythagorean triplets are %d %d %d\n",i,j,k);
        }
      }
    }
    return 0;
}
