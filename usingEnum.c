#include <stdio.h>


int main()
{
    enum company {GOOGLE,FACEBOOK, XEROX=6, YAHOO, EBAY, MICROSOFT};
    enum company companyA, companyB, companyC;
    companyA = XEROX;
    companyB = GOOGLE;
    companyC = EBAY;


    printf("%d\n%d\n%d\n", companyA, companyB, companyC);
    return 0;
}
