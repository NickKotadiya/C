#include <stdio.h>
void dataset(int intch)
{
    int c = 255;
    int ans;
    ans = intch*c;
    printf("value of intch:%d\n",ans);
}

int main()
{
    int intch = 2.54;
    dataset(intch);
}