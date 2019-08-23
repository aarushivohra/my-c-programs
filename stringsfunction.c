#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//This program displays string in reverse order
int main()
{
    char word[50];

    int stringLength = 0;
    printf("Input a string.\n");
    scanf("%s", word);

    printf("\nYou entered %s\n", word);

    stringLength = strlen( word);

    printf("The length of the string is %d\n", stringLength);
    printf("The string in reverse order is ");

    int i = 0;

    for ( i = stringLength; i>=0; --i)

    {printf("%c", word[i]);}

    return 0;
}
