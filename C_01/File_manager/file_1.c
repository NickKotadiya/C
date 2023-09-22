#include<stdio.h>

int main()
{
    FILE *fp;
    char buff[500];

    fp = fopen("f_1.txt","r");

    while (fscanf(fp,"%s",buff) != EOF)
    {
        printf("%s ",buff);
    }
    
    fclose(fp);

    return 0;
}


// EOF - End of file