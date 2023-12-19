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
    int c=0,se;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if(arr[i]==se) 
        c++;
    }
    printf("%d",c);
    
}