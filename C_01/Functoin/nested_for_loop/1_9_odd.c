#include<stdio.h>
void print(int i, int j)
{
    for(i=1; i<=10; i++)
    {
        if(i%2!=0)
        {
            for (j=1; j<=5; j++)
            {
                printf("%d " , i);
            }
        }
        printf("\n");
    }
}
int main()
{
    int i,j;

    print(i,j);
}