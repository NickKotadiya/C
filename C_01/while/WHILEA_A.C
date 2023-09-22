#include<stdio.h>
#include<conio.h>
void main()
{
	int i=65;
	clrscr();
	while(i<=90)
	{
		printf("%c %c , " , i,i+32);
		i++;
	}
 getch();
}