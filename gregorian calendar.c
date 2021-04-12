#include<stdio.h>
int main()
{
    int yr,leapYr,normYr,totDay,rem;
    printf("Enter year:");
    scanf("%d",&yr);

    leapYr=yr/4;
    normYr=(yr-1)-1900;
    rem=normYr-leapYr;
    totDay=(leapYr*366)+(rem*365)+2;

    if(totDay%7==0)
        printf("Jan 1 of %d was Monday.",yr);
    else if(totDay%7==1)
        printf("Jan 1 of %d was Tuesday.",yr);
    else if(totDay%7==2)
        printf("Jan 1 of %d was Wednesday.",yr);
    else if(totDay%7==3)
        printf("Jan 1 of %d was Thursday.",yr);
    else if(totDay%7==4)
        printf("Jan 1 of %d was Friday.",yr);
    else if(totDay%7==5)
        printf("Jan 1 of %d was Saturday.",yr);
    else if(totDay%7==6)
        printf("Jan 1 of %d was Sunday.",yr);


    return 0;
}
