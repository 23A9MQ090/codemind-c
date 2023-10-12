#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    if (n<3)printf("LIGHT");
    else if  (n>=3&&n<7)printf("MODERATE");
    else printf("HEAVY");
}