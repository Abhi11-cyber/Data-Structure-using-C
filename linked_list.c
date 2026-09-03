#include <stdio.h>
#include <conio.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
}*head;

void create_list(int value) 
{
    struct node *temp, *newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {   // inserting element at end of linked list.

        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void insert_at_beginning(int value)
{
    struct node *temp,*newnode;
    newnode = malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->next = head;
    head = newnode;
}

void display()
{
    struct node *temp;
    if(head==NULL)
    {
        printf("list is empty");
    } 
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void search_node(struct node *head, int key)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("key is found in linked list");
            return;
        }
        else
        {
          temp = temp->next;
        }
    }
      printf("element is not found in linked list");
}

void main()
{
    int key,data,value, n, i;
    head = NULL;
    printf("how many nodes want to be add in linked list\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter data value\n");
        scanf("%d", &data);
        create_list(data);
    }
    printf("Initial linked list:\n");
    display(head);                                    // Display the list after creation

    printf("Enter a value to insert at the beginning:\n");
    scanf("%d", &data);
    insert_at_beginning(data);                        // Insert a new node at the beginning

    printf("Linked list after inserting at the beginning:\n");
    display();                                        // Display the list after insertion

    printf("Enter a key to search in the linked list:\n");
    scanf("%d", &key);
    search_node(head, key);                           // Search for the key in the linked list
    getch();
}