#include<stdio.h>
int main()
{
int choice;
printf("Please give a choice 1 or 2:");
scanf("%d",&choice);

switch(choice)
{
case 1:
    printf("Hello world!!!");
                break;

case 2:
    printf("Bye bye world!!!");
                break;

default:
    printf("You suck world!!!");


}

return 0;
}
