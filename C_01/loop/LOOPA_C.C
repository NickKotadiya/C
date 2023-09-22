#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	for(a=65; a<=90; a+=2)
	{
		if(a%4==1)
		{
			printf("%c\n" , a);
		}
		else
		{
			printf("%c\n," , a+32);
		}

	}
  getch();
}