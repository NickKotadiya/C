#include<stdio.h>

int main()
{
	char str1[100],str2[100];
	char str3[100];

	int i=0,j=0;

	printf("enter str value:");
	scanf("%[^\n]s",&str1);

	printf("enter str value:");
	scanf("%s",&str2);

	for(i=0; str1[i]!='\0'; i++)
	{
		str3[j]=str1[i];
	}
	for(i=0; str2[i]!='\0'; i++)
	{
		str3[j]=str2[i];
		j++;
	}
	str3[j]='\0';
	
	printf("joint  str: %s ",str3);
	return 0;
}