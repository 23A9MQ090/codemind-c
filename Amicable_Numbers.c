#include<stdio.h>
int main()
{
    int n,m,k=0,b=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        k+=i;
    }
    for(int j=1;j<=m;j++)
    {
        if(m%j==0)
        b+=j;
        }
        if(k==b)
    printf("Amicable");
    else
    printf("Not Amicable");
}