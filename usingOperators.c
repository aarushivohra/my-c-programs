#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
  {
    float m=0;
    printf("Enter a value in minutes:\n");
    scanf("%f",&m);

    int x=365*24*60; //minutes in year
    double days=0.0;
    double years=0.0;

    days=m/(24*60);
    years=m/x;

    printf("Number of days=%f\n Number of years=%f\n",days, years);
    return 0;


}
