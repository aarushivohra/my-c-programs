
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t t;
    srand((unsigned) time(&t));

    int randomNumber=rand()%21;
    int tries=5;
    printf("This is a guessing game.\nI have chosen a number between 1 to 20 which you must guess.\n\n");
    printf("You have %d tries left.\nEnter a number:", tries);

    int valueEntered;
    scanf("%d",&valueEntered);

     while (valueEntered>20 || valueEntered<0)
            {printf("Value not accepted.\nEnter a value between 0 to 20:\n");
            scanf("%d", &valueEntered);}




    for (tries<=5; valueEntered>=0 && valueEntered<=20; )
        { --tries;
        printf("Number of tries left:%d\n", tries);


        if (tries==0)
         {  printf("No tries left. The number was %d\n", randomNumber);
                break;}


      else if ( valueEntered==randomNumber)
               { printf("You guessed the right number\n");
                 break;
                }


            else {
                    if ( valueEntered>randomNumber)
                {printf("The number is less than entered value.\nEnter another value:\n");}


                else
             {  printf("The number is greater than entered value.\nEnter another value:\n");}

                scanf("%d", &valueEntered);}
    }



return 0;
}









