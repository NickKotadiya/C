#include<stdio.h>
void print(float basic ,float gross ,float da ,float hra)
{
    if(basic<=5000)
    {
        da = basic*0.2;
        hra = basic*0.08;
    }
    else if(basic<=10000)
    {
        da = basic*0.3;
        hra = basic*0.12;
    }
    else if(basic<=15000)
    {
        da = basic*0.4;
        hra = basic*0.15;
    }
    else
    {
        da = basic*0.5;
        hra = basic*0.2;
    }
    gross = basic+hra+da;

    printf("gross salary of employe = %.2f" , gross);
}
int main()
{
    float basic, gross , da , hra;

    printf("enter basic salary of an employe");
    scanf("%f" , &basic);

    print(basic , gross , da , hra);
}