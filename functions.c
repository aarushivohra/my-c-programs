#include <stdio.h>
#include <stdlib.h>

int gcd( int u, int v);
int absoluteValue( int x);
int main()
{   int result1 = 0;
    result1 = gcd( 8, 4);
    printf("The gcd of 8 and 4 is %d.\n", result1);
    printf("\a");

    int result2;
    result2 = absoluteValue( 8 );
    printf("The absolute value of 8 is %d.\n", result2);

    result2 = absoluteValue( -7 );
    printf("The absolute value of -7 is %d.\n", result2);



    return 0;
}

int gcd( int u, int v)
{   int temp;
    while (v!=0)
  { temp = u % v;
    u = v;
    v = temp;}
    return u;}


int absoluteValue( int x)
{   if (x < 0)
    x = -x;
    return x;}
