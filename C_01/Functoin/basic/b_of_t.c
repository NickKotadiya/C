#include<stdio.h>
void print(float base,float height)
{
    printf("ans is :%f" , (height*base)/2);
}
int main()
{
    float base;
    float height;

    printf("enter a value of base");
    scanf("%f" , &base);

    printf("enter a value of hright");
    scanf("%f" , &height);

    print(base,height);
}