#include<stdio.h>
int main()
{
    int n,a=1,k,d=0;
    scanf("%d",&n);
    while(n>0)
    {
        k=n%10;
        a*=k;
        d+=k;
        n/=10;
    }if(a==d)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}
    