#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1 , n, mul=0;
	printf("enter a valu");
	scanf("%d" , &n);
	while(i<=n)
	{
		mul=i*i;
		printf("%d " , i);
		i++;
	}
 return 0;
}