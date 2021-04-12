#include<stdio.h>
int main()
{
    int a[11],val,i,pos;
    printf("Enter 10 integers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    printf("Enter integer to insert into the array: ");
    scanf("%d",&val);

    printf("Enter index in which to enter it: ");
    scanf("%d",&pos);

    for(i=9;i>=pos;i--)
        a[i+1]=a[i];

    a[pos]=val;

    printf("Resultant array:\n");
    for(i=0;i<11;i++)
        printf("%d\n",a[i]);

    return 0;
}
