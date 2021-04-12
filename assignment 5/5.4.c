#include<stdio.h>
#include<string.h>
struct student
{
    char name[30];
    int age;
    float cgpa;
};

int main()
{
    int n,i,x,j;
    float max;
    char ch;

    printf("Enter number of students: ");
    scanf("%d",&n);
    struct student info[n];
    for(i=0;i<n;i++)
    {
        printf("Student %d:-\n",i+1);
        printf("Enter name: ");
        scanf("%s",&info[i].name);
        printf("Enter age:");
        scanf("%d",&info[i].age);
        printf("Enter CGPA:");
        scanf("%f",&info[i].cgpa);

    }
    max=info[0].cgpa;
    for(i=0;i<n;i++)
    {
        if(max<info[i].cgpa)
           {
                max=info[i].cgpa;
                x=i;
           }
    }
    printf("Student with Highest CGPA:\nName:%s\nAge:%d\nCGPA:%f",info[x].name,info[x].age,info[x].cgpa);

    return 0;
}
