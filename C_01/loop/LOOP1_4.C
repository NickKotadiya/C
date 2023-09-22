#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n, sum=0;
	clrscr();
	printf("enter a value:");
	scanf("%d" , &n);

	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d" , i*i);
		}
		else
		       {	printf("%d" , i);	}

	}
	  printf("%d," , i);
 getch();
}