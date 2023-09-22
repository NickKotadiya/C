#include <stdio.h>
    int total = 0, mat, eng, guj, sci;
    float per;
void setdata1()
{
    printf("Enter maths marks: ");
    scanf("%d",&mat);

    printf("Enter english marks: ");
    scanf("%d",&eng);

    printf("Enter gujarati marks: ");
    scanf("%d",&guj);

    printf("Enter science marks: "); 
    scanf("%d",&sci);
}

float setdata2()
{
    

    if (mat < 35 || eng < 35 || guj < 35 || sci < 35)    
    {
        printf("Student is fail");
    }
    else
    {
        total = mat + eng + guj + sci;
        
        per= total*100/400;
        
    }
}
void setdata3()
{
    printf("\nTOTAL MARKS:%d",total);
    printf("\nPERCENTAGE IS:%0.2f",per);   
}

int main()
{
setdata1();    
setdata2();
setdata3();

}