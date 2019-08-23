#include<stdio.h>
// Date 19 Aug 2019
//program to calculate simple and compound interest

int main()
{   int rate, time, sInterest, cInterest;
    int pAmount;

    printf("Enter principal amount : ");
	scanf("%d", &pAmount);

	printf("\nEnter rate : ");
	scanf("%d", &rate);

	printf("\nEnter time : ");
	scanf("%d", &time);

	sInterest = (pAmount * rate * time)/100;

	int p = 1 + rate/100;
	cInterest = pAmount * ( (p) ^ (time) );

	printf("\n Simple Interest = Rs %d", sInterest);
	printf("\n Compound Interest = Rs %d", cInterest);

return 0;}
