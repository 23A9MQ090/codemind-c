#include<stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    float m=sum/n;
    printf("%.2f",m);
    
}