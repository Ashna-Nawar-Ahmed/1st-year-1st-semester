#include<stdio.h>
int main()
{
    float m1,m2,m3,m4,m5,s,p1,p2,p3,p4,p5;
    printf("Enter the marks of 5 subjects:\n");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    s=m1+m2+m3+m4+m5;

    p1=(m1*100)/s;
    p2=(m2*100)/s;
    p3=(m3*100)/s;
    p4=(m4*100)/s;
    p5=(m5*100)/s;

    printf("\nAggregate marks=%f\n",s);
    printf("\nPercentage of marks of 1st subject=%f\n",p1);
    printf("\nPercentage of marks of 2nd subject=%f\n",p2);
    printf("\nPercentage of marks of 3rd subject=%f\n",p3);
    printf("\nPercentage of marks of 4th subject=%f\n",p4);
    printf("\nPercentage of marks of 5th subject=%f\n",p5);

    return 0;
}
