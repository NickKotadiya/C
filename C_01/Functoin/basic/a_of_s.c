#include<stdio.h>
void print(float wieth , float length)
{
    printf("ans is :%f" , wieth*length);
}
int main()
{
    float wieth;
    float length;

    printf("enter a valu of wieth");
    scanf("%f" , &wieth);

    printf("enter a valu of iength");
    scanf("%f" , &length);

    print(wieth,length);
}