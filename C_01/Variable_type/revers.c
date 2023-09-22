#include <stdio.h>

int setdata(int n)
{
    int i=0,a;
    
    while (n>0) 
    {
        a = n % 10;
        i = a+(i*10);
        n= n / 10;
        
    }
    
    return i;
}

int main() 
{
    int i,n;
    
    printf("Enter a number:");
    scanf("%d",&n);
    
    i = setdata(n);
    
    printf("Reverse number is: %d\n",i);
}