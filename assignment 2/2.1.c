#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter two integers:\n");
    scanf("%f%f",&a,&b);

    if(a<0&&b<0)
        printf("Product=%f",a*b);

    else

    {   if(a>=0&&b>=0)
        printf("Sum=%f",a+b);

        else
        {
            if(a<0&&b>=0)
               printf("Sum=%f",a*(-1)+b);

            else
                printf("Sum=%f",b*(-1)+a);
        }
    }

   return 0;
}
