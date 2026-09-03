#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define SIZE 4
int f = -1, r = -1, a[SIZE];

void enqueue()
{
    int data;
    printf("enter element in Queue: ");
    scanf("%d", &data);
    if (r == SIZE - 1)
    {
        printf("\nQueue is full");
    }
    else
    {
        r++;
        a[r] = data;
    }

    if (f == -1)
    {
        f = 0;
    }
}

void dequeue()
{
    int data;
    if (f == -1)
    {
        printf("\nQueue is Empty");
    }
    if (f == -1)
    {
        return;
    }
    data = a[f];
    printf("\nDeleted element is:%d", data);
    if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        f++;
    }
}

void display()
{
    int i;
    if (f == -1)
    {
        printf("Queue is Empty");
        return;
    }
    printf("Queue is: \n");
    for (i = f; i <= r; i++)
    {
        printf("%d\t", a[i]);
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