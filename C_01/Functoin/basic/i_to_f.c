#include<stdio.h>
void print(float inches , float feet)
{
    printf("ans is : %f" ,12*feet);
}
int main()
{
    float feet;
    float inches = 12.00;

    printf("enter a value of feet:");
    scanf("%f",&feet);

    print(inches,feet);

    return 0;
}