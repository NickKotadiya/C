#include<stdio.h>
void print(int i, int j)
{
    for(i=5; i>=1; i--)
    {
        for (j=5; j>=1; j--)
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