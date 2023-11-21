#include<stdio.h>
int main ()
{
    int i,n,s,rev=0;
    scanf("%d",&n);
    while(n>0)
    {
    s=n%10;
    rev=rev*10+s;
    n=n/10;
    }
    printf("%d",rev);
}