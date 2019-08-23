
#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main()
{
    int p;
    int i;
    int primes[50]={0};
    int Index=2;

    primes[0]=2;
    primes[1]=3;
    bool isPrime;
    for ( p=5; p<=100; p=p+2 )
    {
        isPrime = true;
        for ( i=0; p/primes[i] >= primes[i]; ++i )

            if ( p%primes[i] == 0)
            isPrime = false;

            if (isPrime == true)
            {primes[Index]=p;
             ++Index;}

            for ( i=0; i<Index ; ++i)
            { printf("%d ", primes[i]);
              printf("\n");
            }
            }

return 0;
}
