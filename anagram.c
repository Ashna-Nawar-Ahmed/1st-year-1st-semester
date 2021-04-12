#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int i,j=0;
    printf("Enter a word:");
    gets(a);
    strlwr(a);
    printf("Enter another word:");
    gets(b);
    strlwr(b);
    if(strlen(a)==strlen(b))
    {
        for(i=0;i<strlen(a)-1;i++)
        {
            for(j=0;j<strlen(a)-1;j++)
            {
                if(a[i]==a[j])
                    j++;
            }
        }
    }

    else printf("Words not of equal length.");
    if(j==strlen(a)-1)
        printf("They are anagrams.");
    else printf("Not anagrams.");
    return 0;
}
