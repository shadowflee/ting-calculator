#include <stdio.h>
#define RATE_DEV 6.0
#define RATE_TXT 0.0025
#define RATE_MIN 0.015
#define RATE_MBS 0.019
// made by shadowflee

int main() {
    int text, min, data, device;
    double total; 

    printf ("how many devices do you have: ");
    scanf ("%d",&device);

    printf ("How many text do you send a month: ");
    scanf ("%d",&text);

    printf ("how many minutes do you use a month: ");
    scanf ("%d",&min);

    printf ("mb of data a month: ");
    scanf ("%d",&data);

    total = RATE_DEV * device + RATE_TXT * text + RATE_MIN * min + RATE_MBS * data;

    printf("your total bill if using ting would be: $%.2f\n", total );

    return 0;
}
