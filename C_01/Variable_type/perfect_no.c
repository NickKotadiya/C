#include<stdio.h>

void dataset(int i,int n,int sum)
{
    for(i=1 ; i<n ; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect");
    }
}

int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    dataset(i,n,sum);
}