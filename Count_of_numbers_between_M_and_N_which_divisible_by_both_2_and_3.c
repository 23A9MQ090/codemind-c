#include<stdio.h>
int main()
{
    int c=0,n,m;
    scanf("%d%d",&n,&m);
    for(int i=n;i<=m;i++)
    {
        if(i%2==0&&i%3==0)
        c++;
    }printf("%d",c);
}
    