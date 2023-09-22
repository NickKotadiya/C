#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5];
	int arr2[5]={1,2,3,4,5};

		for(int i=0; i<5; i++)
		{
			printf("enter arr[%d]value:", i);
			scanf("%d", &arr[i]);

		}
	for(int i=0; i<5; i++)
	{
		printf("%d,",arr[i]);
	}
return 0;
}