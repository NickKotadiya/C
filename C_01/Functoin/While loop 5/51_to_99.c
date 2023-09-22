#include<stdio.h>
void print(int i)
{
    while(i<=99)
    {
        printf("%d " , i);
        i++;
    }
    
}
int main()
{
    int i = 51;

    print(i);
}