#include<stdio.h>
void print(int i, int n)
{
    for(i=1; i<=n; i++)
    {
        if (i%2!=0)
        {
            printf("%d" , i);
        }
    }
}
int main()
{
    int i,n;
    printf("enter a valu :");
    scanf("%d" , &n);

    print(i,n);
}