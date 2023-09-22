#include <stdio.h>

int main()
{

    FILE *fp;

    fp = fopen("f_1.txt","w+");
    fprintf(fp,"hey i am nick i am sutdy on skill qode....\n");
    fputs("my cors is bca and todya is my c languge is comte....\n",fp);
    fclose(fp);

    return 0;
}