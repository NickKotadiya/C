#include<stdio.h>

int main()
{
	int i,j,sum=0,a[3][3];
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("enter a value of a[%d][%d] : " ,i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("\n");

	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ",a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("2arry sum =%d",sum);	
  return 0;
}