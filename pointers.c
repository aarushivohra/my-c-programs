#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 54;

    int*pnumber = NULL;

    pnumber = &number;

    printf("Adress of pointer : %p\n", &pnumber);
    printf("Value of pointer : %p\n", pnumber);
    printf("Value pointer is pointing to : %d\n", (int)*pnumber);
}
