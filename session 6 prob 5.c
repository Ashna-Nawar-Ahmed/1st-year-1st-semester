#include <stdio.h>
#include<string.h>

int main(void) {     char name[30],ch;     int i=0;

    printf("Enter your name(below 30 character): ");     do     {         ch=getchar();         if(ch=='\n')             break;         else             name[i]=ch;         i++;     }while(i<=28);     name[i]='\0';


         printf("Your name is: ");     for(i=0; name[i]; i++)         putchar(name[i]);          printf("\n\nEnter your name again: ");     gets(name);     printf("Your name is: ");     puts(name);

    return 0; }
