#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10];
    int i,val,flag=0;
    printf("Enter a palindrome(within 9 characters): ");
    gets(str1);
    strupr(str1);
    val=strlen(str1);

    for(i=0;i<=val-1;i++)
    {
        if(str1[i]!=str1[val-1-i])
            {
                flag=1;
                break;
            }
    }
    if(flag)
        printf("It is not a palindrome.");
    else
        printf("It is a palindrome.");


    return 0;
}
