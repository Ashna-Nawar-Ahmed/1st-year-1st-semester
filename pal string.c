#include<stdio.h>
int main()
{
    char a[20];
    int i,cnt=0,flag=0;
    printf("Enter a character array:");
    for(i=0;i<20;i++)
        {
            scanf("%c",&a[i]);
            cnt++;
        }


    for(i=0;i<cnt;i++)
    if(a[i]!=a[cnt-1])
        flag=1;

    if(flag)
        printf("It is not a palindrome.");
    else printf("It is a palindrome.");

    return 0;
}
