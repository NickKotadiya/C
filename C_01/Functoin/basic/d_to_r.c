#include <stdio.h>
void dataset(int doller)
{
    int r;
    r=doller*10;
    printf("value of doller:%d\n",r);
}

int main()
{
    int doller = 5;
    dataset(doller);
}