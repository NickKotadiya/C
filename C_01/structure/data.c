#include <stdio.h>
struct bills
{
    char productname[5];
    int rate;
    int qty;
    int amt;
    int dis;
    int billamt;
    float gst;
    float netbill;
};

int main()
{
    struct bills b[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("enter product name:");
        scanf("%s", &b[i].productname);

        printf("enter product rate:");
        scanf("%d", &b[i].rate);

        printf("enter product qulity:");
        scanf("%d", &b[i].qty);
        printf("-----------------\n");
    }

    printf("product\tratr\tqulity\tamt\tdis\tbillamt\tgst\tnetbill");
    for (i = 0; i < 5; i++)
    {
        b[i].amt = b[i].rate * b[i].qty;
        b[i].dis = b[i].amt * 0.05;
        b[i].billamt = b[i].amt - b[i].dis;
        b[i].gst = b[i].billamt + 0.18;
        b[i].netbill = b[i].billamt + b[i].gst;

        printf("\n%s\t%d\t%d\t%d\t%d\t%d\t%.2f\t%.2f", b[i].productname, b[i].rate, b[i].qty, b[i].amt, b[i].dis, b[i].billamt, b[i].gst, b[i].netbill);
    }
}