#include<stdio.h>
void print(int i, int j)
{
    for(i=1; i<=5; i++)
    {
        for (j=1; j<=5; j++)
        {
            printf("%d " , i);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;

    print(i,j);
}