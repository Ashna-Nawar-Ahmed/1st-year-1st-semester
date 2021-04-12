#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,val1,val2;

    printf("Enter a string(within 30 characters): ");
    gets(str1);

    printf("Enter another string(within 30 characters): ");
    gets(str2);

    val1=strlen(str1);
    val2=strlen(str2);

    if(val1<val2)
    {
        strupr(str2);
        for(i=0;i<=val2;i++)
            str1[val1+i]=str2[i];

        puts(str1);
    }

    else
    {
        strupr(str1);
        for(i=0;i<=val1;i++)
            str2[val2+i]=str1[i];

         puts(str2);
    }

    return 0;
}
