#include<stdio.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(i=0;i<n;i+=2)
    {
        if(arr[i]%2!=0) 
        {
        flag=1;
        break;
        }
    }
    if (flag==1)printf("False");
    else printf("True");
}