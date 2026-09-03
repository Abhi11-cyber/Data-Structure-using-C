// selection_sort of array DSU_C
#include <stdio.h>
#include <conio.h>
void insertion_sort(int a[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i - 1; j >= 0 && a[j] > temp; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = temp;
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
    insertion_sort(a, n);
    printf("\nSorted array:\n ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    getch();
    return 0;
}