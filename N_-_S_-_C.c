#include<stdio.h>
int main ()
{
    int i,n,m;
    scanf("%d%d",&n,&m);
    for (i=n+1;i<=m-1;i++)
   {
    printf("%d ",i);
    printf("%d ",i*i);
    printf("%d
",i*i*i);
   }
}