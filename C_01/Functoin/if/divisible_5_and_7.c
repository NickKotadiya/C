#include<stdio.h>
void print(int a)
{
    if (a%5==0&&a%7==0)
    {
        printf("%d is divisible by 5 and 7", a);
    }
    else
    {
        printf("%d is not divisible by 5 and 7", a);
    }
}
int main()
{
    int a;
    printf("enter a value number :");
    scanf("%d" , &a);

    print(a);
}