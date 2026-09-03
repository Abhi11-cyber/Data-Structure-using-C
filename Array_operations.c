// Array creation,insertion,deletion,display operations
#include <stdio.h>
int main()
{
  int a[10], i, choice, size = 0, no, pos, t;
  while (1)
  {
    printf("\nMenu\n1. Array creation\n2. Array insertion\n3. Array deletion \n4. Display\n5. Exit");
    printf("\n Enter choice \t");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter size of array");
      scanf("%d", &size);
      printf("Enter elements of array");
      for (i = 0; i < size; i++)
      {
        scanf("%d", &a[i]);
      }
      break;

    case 2:
      printf("Enter element to be inserted and its position");
      scanf("%d%d", &no, &pos);
      for (i = size; i > pos; i--)
      {
        a[i] = a[i - 1];
      }
      a[pos] = no;
      size++;
      break;

    case 3:
      printf("Enter position of element to be deleted");
      scanf("%d", &pos);
      if (pos >= 0 && pos < size)
      {
        for (i = pos; i < size - 1; i++)
        {
          a[i] = a[i + 1];
        }
        size--;
      }
      else
      {
        printf("Invalid position");
      }
      break;

    case 4:
      printf("Array is \n");
      for (i = 0; i < size; i++)
      {
        printf("%d\t", a[i]);
      }
      break;

    case 5:
      return 0;
    }
  }
  return 0;
}