#include<stdio.h>
int main()
{
    int p,q,a,b,c;
    printf("Pythagorean triplets within 1-1000:\n");

    while(c<=1000)
    {
        for(p=1;p<=1000;p++)
      {
        for(q=1;q<=1000;q++)
        {
            if(p>q)
            {
                if((p%2==0&&q%2!=0)||(p%2!=0&&q%2==0))
                    {
                    a=p*p-q*q;
                    b=2*p*q;
                    c=p*p+q*q;

                    if(c>1000)
                    break;

                    printf("%d %d %d\n",a,b,c);
                    }
                 else continue;
            }
            else continue;
        }
      }
    }



  return 0;
}


