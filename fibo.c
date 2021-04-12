#include<stdio.h>
int main()
{
    int Tn,TP1,TP2,Count,n;

    printf("Enter desired index of series:");
    scanf("%d",&n);
for (TP1=0, TP2=1, Count=1; Count<n; Count = Count + 1)
 {
Tn = TP1 + TP2;
TP1 = TP2;
TP2 = Tn;
}
printf("%d", Tn);

return 0;
}
