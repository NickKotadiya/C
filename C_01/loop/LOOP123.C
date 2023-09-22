#include<stdio.h>
#include<conio.h>
void main()
{
	int i , a=0;
	for(i=1; i<=10; i++)
	{
		a=a+i;
		printf("%d, " , i);
	}
	printf("%d\n" , a);


  getch();
}