// selection_sort of array DSU_C
#include <stdio.h>
#include <conio.h>
void selection_sort(int a[], int n)
{
  int i, j, temp, pos;
  for (i = 0; i < n - 1; i++)
  {
    pos = i;
    for (j = i + 1; j < n; j++)
    {
      if (a[pos] > a[j])
      {
        pos = j;
      }
    }
    {
      temp = a[i];
      a[i] = a[pos];
      a[pos] = temp;
    }
  }
}

int main()
{
  int a[20], n, i;

  printf("Enter no.of elements in array");
  scanf("%d", &n);

  printf("Enter elements in array");

  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("array with entered elements\n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i], "\v");
  }
  selection_sort(a, n);
  printf("\nSorted array:\n ");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", a[i]);
  }
  getch();
  return 0;
}