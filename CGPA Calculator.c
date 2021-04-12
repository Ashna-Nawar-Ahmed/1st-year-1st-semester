#include<stdio.h>
int main()
{
    float three_cred,x,onehalf_cred,threequart_cred,total;
    printf("3 CREDIT COURSES:\n\nEnter Math cgpa:");
    scanf("%f",&three_cred);
    printf("Enter Critical Thinking cgpa:");
    scanf("%f",&x);
    three_cred+=x;
    printf("Enter Physics cgpa:");
    scanf("%f",&x);
    three_cred+=x;
    printf("Enter Chemistry cgpa:");
    scanf("%f",&x);
    three_cred+=x;
    printf("Enter CSE cgpa:");
    scanf("%f",&x);
    three_cred+=x;
    printf("\n1.5 CREDIT COURSES:\n\nEnter CSE Fundamentals cgpa:");
    scanf("%f",&onehalf_cred);
    printf("Enter C lab cgpa:");
    scanf("%f",&x);
    onehalf_cred+=x;
    printf("Enter English lab cgpa:");
    scanf("%f",&x);
    onehalf_cred+=x;
    printf("\n0.75 CREDIT COURSES:\n\nEnter Physics lab cgpa:");
    scanf("%f",&threequart_cred);

    total=(three_cred*3+onehalf_cred*1.5+threequart_cred*0.75)/20.25;
    printf("Total CGPA:%f",total);
    return 0;
}
