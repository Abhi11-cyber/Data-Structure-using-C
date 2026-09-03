#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 3
int f = -1, r = -1, a[SIZE];

void enqueue()
{
    int data;
    printf("enter element in Queue: ");
    scanf("%d", &data);

    if ((r + 1) % SIZE == f)
    {
        printf("\nCircular Queue is full");
        return;
    }
    else if (r == SIZE - 1)
    {
        r = 0;
    }
    else
    {
        r++;
    }

    a[r] = data;

    if (f == -1)
    {
        f = r;
    }
}

void dequeue()
{
    int data;
    if (f == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    data = a[f];
    printf("\nDeleted element is:%d", data);

    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else if (f == SIZE - 1)
    {
        f = 0;
    }
    else
    {
        f++;
    }
}

void display()
{  // display function logic for circular qeueue is pasted here from chatgpt.
    int i;
    if (f == -1)
    {
        printf("Queue is Empty");
        return;
    }
    i = f;
    while (1) 
    {
        printf("%d\t", a[i]);
        if (i == r) {
            break;
        }
        i = (i + 1) % SIZE;
    }
}

void main()
{
    int choice;
    while (1)
    {
        printf("\nMenu\n1.Enqueue\n2.Dequeue\n3.display\n4.exit");
        printf("\nEnter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("\nEnter correct choice");
            break;
        }
    }
    getch();
}