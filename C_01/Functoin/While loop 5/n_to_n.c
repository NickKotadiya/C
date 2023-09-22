#include<stdio.h>
void print(int i , int n)
{
    
    while(i>=n)
    {
        i=-n;
        
        printf("%d " , n);
        n++;
    }
    
}
int main()
{
    int i , n;
    printf("en ter a valu of n :");
    scanf("%d" ,&n);
   
    print(i , n);
}