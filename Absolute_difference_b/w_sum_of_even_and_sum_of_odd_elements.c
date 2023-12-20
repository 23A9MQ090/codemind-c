#include<stdio.h>
#include<math.h>
int main ()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0,sum1=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0){
        sum+=arr[i];
        }
        else 
        {
            sum1+=arr[i];
        }
    }
    printf("%d",abs(sum-sum1));
    
}