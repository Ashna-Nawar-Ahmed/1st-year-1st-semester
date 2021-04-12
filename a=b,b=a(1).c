#include<stdio.h>
int main(void)
{
int A,B,t ;

    printf("Enter A=");
       scanf("%d",&A);
           printf("Enter B=");
                scanf("%d",&B);
    t=A ; A=B; B=t ;
      printf("\nA=%d\nB=%d\n",A,B);
      return 0;
      }
