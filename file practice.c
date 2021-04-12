#include<stdio.h>
int main()
{
    FILE *fp;
    int i;
    char c;
    printf("Enter text and type * & press enter to finish:");
    fp=fopen("text1.txt","w");
    if(fp!=NULL)
    {
        while((c=getchar())!='*')
            fputc(c,fp);
    }
    fclose(fp);
    printf("Here's your file:");
    fp=fopen("text1.txt","r");
    if(fp!=NULL)
    {
        while((c=fgetc(fp))!=EOF)
            printf("%c",c);
    }
    fclose(fp);
    return 0;
}
