#include<stdio.h>
int main()
{
    char a[5];
    int i,j=0,loc[5],ch;
    printf("Enter 5 characters:\n");
    for(i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
        ch=a[i];
        if(ch>=48&&ch<=57)
          {
              loc[j]=ch;
              j++;
          }

    }
    if(j==0)
    {
        printf("Found at: ");
        for(i=0;i<j;i++)
            printf("%d",loc[j]);
    }

    else
        printf("Not found.");


    return 0;
}
