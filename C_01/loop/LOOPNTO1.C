#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();

	printf("enter a value:");
	scanf("%d" , &n);
	for(i=n; i>=1; i--)
	{
		printf("%d, ", i);
	}
getch();
}