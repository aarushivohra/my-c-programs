#include <stdio.h>
#include <stdlib.h>

int stringLength( char* pointer);
int main()
{
    char string[100];
    printf("Enter a string :");
    scanf("%s", string);

    char* pstring;
    pstring = &string[0];

    int length;
    length = stringLength(pstring);

    printf("\nThe length of the string is %d", length);

    return 0;
}



int stringLength( char* pointer)
{
    char* initialPointer;
    initialPointer = pointer;

    while ( *pointer)
    {   ++pointer;}

    int result;
    result = pointer - initialPointer;

    return result;
    }
