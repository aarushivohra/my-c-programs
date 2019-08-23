#include <stdio.h>
#include <stdlib.h>
// Program to calculate amount of an item using structures and decision statements

struct item1
    {   char*itemName;
        int quantity;
        float price;
        float amount;
    };

void readItem( struct item1* i);
void printItem( struct item1* j);

int main()
{
    struct item1 item;
    struct item1* pItem;

    pItem = &item;

    pItem->itemName = (char*)malloc(30*sizeof(char));

    if (pItem == NULL)
        exit(0);
    printf("Enter the following details :\n");

    readItem( pItem );
    printItem( pItem );

    free(pItem->itemName);


    return 0;
}


void readItem( struct item1* i)
{
    printf("Item name :");
    scanf("%s", i->itemName);

    printf("\nQuantity :");
    scanf("%i", &i->quantity);

    printf("\nPrice : Rs.");
    scanf("%f", &i->price);
}

void printItem( struct item1* j)
{
    printf("\nItem name : %s\n", j->itemName);
    printf("Quantity : %i\n", j->quantity);
    printf("Price : Rs. %.2f\n", j->price);

    j->amount = (float)j->quantity * j->price;
    printf("Amount : Rs. %.2f\n", j->amount);
    }
