#include<stdio.h>
void print(int i , int j)
{
    while (i<=5)
    {
        j=1;
        while (j<=5)
        {
            printf("%d ", j);
            j++;
        }
        i++;
        printf("\n");
    }
    
}
int main()
{
    int i =1 , j = 1;

    print(i , j);
}