#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20],n;
    printf("Enter string:");
    gets(s1);
    printf("Enter string:");
    gets(s2);
    n=strcmp(s1,s2);
    printf("%d",n);
    return 0;
}
