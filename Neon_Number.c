#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y=n;
    int m,k,b=0;
    m=n*n;
    while(m>0)
    {
        k=m%10;
        b+=k;
        m/=10;
    }if(y==b)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}