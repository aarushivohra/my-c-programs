#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;

    for ( i=1; i<6; ++i)
      { for ( j=1; j<i+1; ++j)
            { printf("%d ", j);}
        printf("\n");}

    i=1;
    j=5;
    for ( i=1; i<6; ++i)
        {for ( j=5; j>i-1; --j)
            { printf("* ");}
         printf("\n");}

    printf("\n");

    i=1;
    j=1;
    for ( i=1; i<6; i=i+1)
        {for ( j=1; j<i; j=j+1)
            printf("  ");

         for ( j=i; j<6; j=j+1)
           {printf("* ");}
         printf("\n");}






return 0;}
