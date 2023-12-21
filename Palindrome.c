#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s=0,k;
    int g=n;
    while(n>0)
    { 
        k=n%10;
        s=s*10+k;
        n/=10;
    }if(s==g)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}