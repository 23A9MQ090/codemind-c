#include<stdio.h>
int main()
{
    int n,a=0,k;
    scanf("%d",&n);
    int d=n;
    while(n!=0)
    {
        k=n%10;
        a=a*10+k;
        n/=10;
    }
    printf("%d",a);
}
    