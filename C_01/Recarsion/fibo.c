#include<stdio.h>

int fibo(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    return fibo(a-1)+fibo(a-2);
}
int main()
{
    for(int i=0; i<10; i++)
    {
        printf("%d," ,fibo(i));
    }
}