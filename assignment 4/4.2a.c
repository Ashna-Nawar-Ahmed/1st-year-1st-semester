#include<stdio.h>
int main()
{
    int i,j,k;
    char ch;
    for(i=65;i<=70;i++)
    {
        for(j=65;j<i;j++)
        {
            ch=j;
            printf("%c",ch);
        }
        for(k=65,printf("\t\t\t");k<i;k++)
        printf("%c",ch);
        printf("\n");
    }

    return 0;
}
