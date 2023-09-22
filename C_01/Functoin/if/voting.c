#include<stdio.h>
void print (int age)
{
    if(age>=18)
    {
        printf("you can voting"); 
    }
    else
    {
        printf("you can not voting");
    }
}
int main()
{
    int age;
    printf("enter a age : ");
    scanf("%d", &age);

    print(age);
}