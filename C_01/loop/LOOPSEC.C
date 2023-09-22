#include<stdio.h>
#include<conio.h>
void main()
{
	int sec , s , h, m;
	clrscr();
	printf("enter a secands:");
	scanf("%d" , &sec);
	h = (sec/3600);
	m = (sec-(3600*h))/60;
	s = (sec - (3600*h)-(m*60));
	printf("H: M: S: = %d: %d: %d:\n" , h , m , s);


  getch();
}