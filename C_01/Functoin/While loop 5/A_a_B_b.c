#include<stdio.h>
void print(int i)
{
    
    while(i<=90)
    {
        
        printf("%c = %d " , i,i);
        i++;
    }
    
}
int main()
{
    int i=65;
   
    print(i);
}