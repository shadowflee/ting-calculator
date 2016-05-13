#include <stdio.h>
// made by shadowflee

int main(int argc, char *argv[]){
    int text, msg, data, device;

    printf ("how many devices do you have: ");
    scanf ("%d",&device);
    printf ("%d\n",device);

    printf ("How many text do you send a month: ");
    scanf ("%d",&text);
    printf ("%d\n",text);

    printf ("how many minutes do you use a month: ");
    scanf ("%d",&msg);
    printf ("%d\n",msg);

    printf ("mb/s of data a month: ");
    scanf ("%d",&data);
    printf ("%d\n",data);

    double adata = ((double) data) * 0.019;
    double amsg = ((double) msg) * 0.015;
    double atext = ((double) text) * .0025;
    double adevice = ((double) device) * 6;

    double total = adata + amsg + atext + adevice;

    printf("your total bill if using ting would be: ");
    printf("%f\n",total);

    return 0;

}
