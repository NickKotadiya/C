#include<stdio.h>
#include<conio.h>
void main()
{
	int i, n;
	clrscr();
	printf("enter a valu");
	scanf("%d" , &n);
		i=-n;
	while(i>=n)
	{
		printf("%d " , n);
		n++;
	}

 getch();
}