#include<stdio.h>
int main()
{
    char c;
    int a;

    printf("Please enter a letter:");
    scanf("%c",&c);

    a=c;

    if(a>=65&&a<=90)
    {
        a=a+32;
        c=a;
        printf("The small letter is:%c",c);
    }

    else
    {
        if(a>=97&&a<=122)

           {
            a=a-32;
            c=a;
            printf("The capital letter is:%c",c);
           }

         else
            printf("Invalid Input!!!");
    }

    return 0;
}
