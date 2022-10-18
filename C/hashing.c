#include <stdlib.h>
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
}*hashtable[7];

void insert(int keyvalue)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->next = NULL;
    new->data = keyvalue;
    int index = keyvalue % 7;
    if (hashtable[index] == NULL)
        hashtable[index] = new;
    else
    {
        struct node *temp = hashtable[index];
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
    }
}
void printhashtable()
{
    for (int i = 0; i < 7; i++)
    {
        struct node *ptr = hashtable[i];
        printf("\n%d:", i);
        while (ptr != NULL)
        {
            printf(" %d ", ptr->data);
            ptr = ptr->next;
        }
    }
}
void main()
{
    for (int i = 0; i < 7; i++)
    {
        hashtable[i] = NULL;
    }
    int item;
    char choice = 'y';
    while (choice == 'y')
    {
        printf("Enter the value: ");
        scanf("%d", &item);
        insert(item);
        printf("Do you want to enter a new element (y/n): ");
        scanf(" %c", &choice);
    }
    printf("\nHASHTABLE: \n");
    printhashtable();
}
