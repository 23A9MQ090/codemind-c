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
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    float m,flag;
    m = sum/n;
    for(i=0;i<n;i++)
    {
        if(m==arr[i]){
        flag=1;
        break;
        }
    }
    if (flag==1)printf("True");
    else printf("False");
}