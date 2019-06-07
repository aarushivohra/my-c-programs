#include <stdio.h>
#include <stdlib.h>

int main()
{

   int x=sizeof(int);
   printf("The size of int is %d \n", x);
   x=sizeof(char);
   printf("The size of int is %d \n", x);
   x=sizeof(long);
   printf("The size of int is %d \n", x);
   x=sizeof(long long);
   printf("The size of int is %d \n", x);
    x=sizeof(double);
   printf("The size of int is %d \n", x);
x=sizeof(long double);
   printf("The size of int is %d \n", x);

    return 0;
}
