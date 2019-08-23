#include <stdio.h>
#include <stdlib.h>
// Program to calculate average rainfall using arrays

int main()
{
    int y,m;
    float yrain=0.0; //Total yearly rain
    float mrain; //Total monthly rain
    float yearlyAvg[5];
    int year=2010;

    int aY,aM; //Months or years entered by user

    printf(" Enter years Enter months");
    scanf("%d %d", &aY, &aM);

    printf("YEAR  RAINFALL(inches)\n");

    float rainfall[5][12]={
                            { 1.5, 1.4, 1.6, 1.2, 2.3, 2.1, 2.5, 2.6, 3.1, 2.0, 1.5, 1.2}, //2010
                            { 1.3, 1.2, 1.5, 1.6, 2.3, 3.7, 3.8, 3.4, 3.2, 2.6, 1.3, 1.1}, //2011
                            { 1.6, 1.2, 0.7, 1.5, 1.3, 1.6, 1.2, 1.8, 2.1, 2.2, 1.3, 1.2}, //2012
                            { 1.9, 1.6, 1.3, 1.8, 2.1, 2.3, 2.4, 2.6, 3.2, 1.3, 1.3, 1.3}, //2013
                            { 1.3, 1.6, 1.4, 1.9, 2.3, 2.5, 2.4, 2.6, 3.6, 1.4, 1.2, 0.8}, //2014
                            };

    for ( y=0; y<aY; y=y+1)
        {
            {for ( m=0; m<aM; m=m+1)
                yrain = (yrain + rainfall[y][m]);
             }
             yearlyAvg[y] = yrain/aM;


             printf("%i  %.1f\n", year, yearlyAvg[y]);
             year = year + 1;
        }

    return 0;
}
