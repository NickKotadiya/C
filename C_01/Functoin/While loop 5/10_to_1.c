#include<stdio.h>
void print(int i)
{
    while(i>=1)
    {
        printf("%d " , i);
        i--;
    }
    
}
int main()
{
    int i = 10;

    print(i);
}