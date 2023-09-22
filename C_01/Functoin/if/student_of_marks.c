#include<stdio.h> 
void print (float per ,int eng , int ba , int sp , int total)
{
    total = eng + ba + sp;
    printf("\n total marak of student = %d\n" ,total);
    per = total/3;
    printf("percentage of a student = %.2f\n" ,per);
    
    if(eng>=35&&ba>=35&&sp>=35)
    {
        printf("\nstudent is pass");
    }
    else
    {
        printf("\nstudent is fail");
    }
}
int main()
{
    int eng,ba,sp,total;
    float per;

    printf("enter a marks of subjects: \n ");
    scanf("%d %d %d" ,&eng , &ba , &sp);

    print(per,eng,ba,sp,total);
}