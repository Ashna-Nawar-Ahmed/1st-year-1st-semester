#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Please enter three integers=\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
            printf("%d is the greatest integer.",a);

        else
            printf("%d is the greatest integer.",c);

    }

    else
    {
        if(b>c)
           printf("%d is the greatest integer.",b);

        else
            printf("%d is the greatest integer.",c);
    }


    return 0;
}
