#include<stdio.h>
int main()
{
	char str[40];
	int length;

	printf("Enter str value : ");
	scanf("%[^\n]s", &str);

	for(int i=0; str[i]!='\0'; i++)
	{
		printf("str[%d]value is: %c\n",i,str[i]);
		length = i;
		
	}
	printf("the length of string : %d", length);



 return 0;
}