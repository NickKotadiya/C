#include<stdio.h>
void print(int man)
{
    if(man%5==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}
int main()
{
    int man;

    printf("enter a value of man");
    scanf("%d" , &man);

    print(man);
}