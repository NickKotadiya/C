#include<stdio.h>
int getsub()
{
    int eng,guj,sci,total;
    printf("enter eng marks: ");
    scanf("%d",&eng);

    printf("enter guj marks: ");
    scanf("%d",&guj);
        
    printf("enter sci marks: ");
    scanf("%d",&sci);

    total=guj+eng+sci;
    return total;
}
int calcul(int totalmarks)
{
    int per=totalmarks*100/300;

    printf("total = %d\n",totalmarks);
    printf("per = %d\n",per);

    return per;
}
int main()
{
    int gettotal = getsub();
    int getper = calcul(gettotal);     
    return 0; 
}