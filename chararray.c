#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int countchar( const char string[]);
void concat( char result[], const char str1[], const char str2[]);
bool equalStrings( char s1[], char s2[]);


int main()
{
   const char word1[] = "quick";
   const char word2[] = "brown";
   const char word3[] = "box";
   char result[50];

    printf("The number of characters in word1, word2, word3 are respectively %d, %d, %d", countchar(word1), countchar(word2), countchar(word3));
    concat( result, word2, word3);
    printf("\n%s concat. with %s becomes %s", word2, word3, result );

    bool x;
    bool y;
    x = equalStrings("quiet", "quiet");
    y = equalStrings("quiet","quite");
    printf("\n%d\n", x);
    printf("%d", y);

    return 0;}


int countchar( const char string[])
{   int count = 0;

    while (string[count] != NULL )
    {++count;}
     return count;
    }



void concat( char result[], const char str1[], const char str2[])
{
    int i, j;

    for ( i = 0; str1[i] !='\0'; ++i)
    { result[i] = str1[i];}

    for ( j = 0; str2[j] != '\0'; ++j)
    { result[i+j] = str2[j];}

}



bool equalStrings( char s1[], char s2[])
{   int i;
    bool isEqual = false;
    while ( s1[i] == s2[i] && s1!='\0' && s2!='\0')
    { ++i;}

    if ( s1=='\0' && s2=='\0')
    isEqual = true;

    else
    isEqual = false;
}
