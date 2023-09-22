#include<stdio.h>
void print(char c)
{
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
        c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
    {
        printf("vowel");
    }
    else 
    {
        printf("contsant");
    }
}
int main()
{
    char c;

    printf("enter a chartar \n");
    scanf("%c" , &c);

    print(c);
}