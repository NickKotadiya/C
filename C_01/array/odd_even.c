#include<stdio.h>
int main()
{
	int i , odd=0, even=0, a[10];
	
	for(i=0; i<10; i++)
	{
		printf("entra a valu a[%d] : " , i);
		scanf("%d" , &a[i]);
	}
	for(i=0; i<10; i++)
	{
		if(i%2==0)
		{
			even = even + a[i];
		}
		else
		{
			odd = odd + a[i];
		}
	}
	printf("total of even : %d" , odd);
	printf("total of odd : %d" , even);
  return 0;
}