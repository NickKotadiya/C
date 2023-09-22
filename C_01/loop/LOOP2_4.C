#include<stdio.h>
#include<conio.h>
void main()
{
	int i , j;
	clrscr();
	for(i=1; i<=10; i++)
	{
		if(i%2==0)
		{
			for(j=1; j<=5; j++)
			{
				printf("%d", i);
			}
		}
		printf("\n");
	}
 getch();
}