#include<stdio.h> 

void print(int per ,int eng , int ba , int sp , int total)
{
    total = eng + ba + sp;
    printf("\n total marak of student = %d\n" ,total);
    per = total/3;
    printf("percentage of a student = %d\n" ,per);

}

void grad(float per ,int eng , int ba , int sp , int total)
{
    
    if(per>=80) 
	{
		printf("\n Grade : A");
	}
	else if(per>=60)
	{
		printf("\n Grade : B");
	}
	else if(per>=40) 
	{
		printf("\n Grade : C");
	}
	else if(per<40) 
	{
		printf("\n Fail ");
	}
}
int main()
{
    int eng,ba,sp,total;
    float per;

    printf("enter a marks of subjects: \n ");
    scanf("%d %d %d" ,&eng , &ba , &sp);

    print(per,eng,ba,sp,total);
	grad(per,eng,ba,sp,total);
}