#include <stdio.h>
int main()
{
        printf("Enter number of hours worked in a week:\n");
    int hours, grossPay, taxes, netPay;
        scanf("%d", &hours );

    if (hours<40)
        { printf("Gross Pay=$%d\n", hours*12);
        grossPay=hours*12; }

    else
        { printf("Gross Pay=$%d\n", (hours-40)*18+12*40);
        grossPay=(hours-40)*18+12*40 ; }



    if (grossPay>300)

        if (grossPay<450)
        { taxes=(grossPay-300)*0.20 + 300*0.15 ;
          printf("Taxes=$%d\n", taxes);}

        else
        { taxes=(grossPay-450)*0.25 + 150*0.20 + 300*0.15;
          printf("Taxes=$%d\n", taxes);}

    else
        { taxes=grossPay*0.15;
          printf("Taxes=$%d\n", taxes);}

    netPay=grossPay - taxes;
    printf("Net Pay=$%d\n", netPay);



}
