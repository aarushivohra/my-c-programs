#include <stdio.h>
#include <stdlib.h>

void square( float* x);


int main()
{
    float num;
    printf("Enter a number to be squared:\n");
    scanf("%f", &num);
    square(&num);
    printf("Square of the number is : %.2f", num);


    return 0;
}

void square( float* x)
{
    *x = (*x)*(*x);}
