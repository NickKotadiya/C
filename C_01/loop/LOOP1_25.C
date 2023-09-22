#include<stdio.h>
#include<conio.h>
void main()
{
	int i ,j;
	clrscr();
	for(i=1; i<=25; i++)
	{
		if(i%5==0)
		{
			printf("%3d\n", i);
		}
		else
		{
			printf("%3d", i);
		}
	}
 getch();
}