#include <stdio.h>
void marks(int mat,int eng,int guj,int sci)
{
    printf("Enter maths marks: ");
    scanf("%d",&mat);

    printf("Enter english marks: ");
    scanf("%d",&eng);

    printf("Enter gujarati marks: ");
    scanf("%d",&guj);

    printf("Enter science marks: ");
    scanf("%d",&sci);

   // result(mat,eng,guj,sci);
}

void result(int mat,int eng,int guj,int sci)
{
    int total; 
    float per;

    total = mat + eng + guj + sci;
    printf("\nTOTAL MARKS:%d",total);

    per= total*100/400;
    printf("\nPERCENTAGE IS:%.2f",per);



        
}

int main()
{
    int mat,eng,guj,sci, total,per;
    marks(mat,eng,guj,sci); 
   // result(mat,eng,guj,sci); 
  
    return 0;
}