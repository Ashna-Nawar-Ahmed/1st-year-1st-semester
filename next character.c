#include<stdio.h>
int main()
{
char c;
int a;

printf("Enter a character(A-Y) or (a-y):");
scanf("%c",&c);
a=c;
a=a+1;
c=a;
printf("Next character=%c",c);

return 0;
}
