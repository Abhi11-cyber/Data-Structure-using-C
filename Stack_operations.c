#include<stdio.h>
#include<stdlib.h>
#define size 4
int top=-1,a[size];
void push();
void pop();
void show();

void main()
{
    int choice;
    while (1)
 { 
    printf("\n1.push\n2.pop\n3.show\n4.exit");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        push();
        break;

         case 2:
        pop();
        break;

         case 3:
        show();
        break;

        case 4:
        exit(0);

        default:
        printf("Enter correct choice");
    }
 }
    
}


    void push()
    {
        int x;
        if(top==size-1)
        {
            printf("stack is overflow");
        }
        else
        {
           printf("Enter element to be inserted\n");
           scanf("%d",&x);
           top++;
           a[top]=x;
        }
    }
    void pop()
    {
        int x;
        if(top==-1)
        {
            printf("stack is in underflow");
        }
        else
        {
            x=a[top];
            printf("\n%d element removed",x);
            top--;
        }
    }
    void show()
    {    
        int i;
        if(top==-1)
        {
            printf("Stack is empty");
        }
        else
        {
          printf("elements of stack are:\n\t");
          for(i=top;i>=0;i--)
          {
            printf("\n%d",a[i]);
          }
        }
    }
