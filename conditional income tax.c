#include<stdio.h>
int main()
{
    float salary;

    printf("Please enter salary(Tk)=");
    scanf("%f",&salary);

    if(salary>=9000)
        printf("Income Tax=TK.%f",salary*0.4);
    else
    {
        if(salary>=7500&&salary<=8999)
            printf("Income Tax=TK.%f",salary*0.3);

        else
           printf("Income Tax=TK.%f",salary*0.2);
    }

    return 0;

}
