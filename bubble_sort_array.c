//bubble_sort of array DSU_C
#include<stdio.h>
#include<conio.h>
void bubble_sort(int a[],int n)
{
int i,j,temp;
for(i=1;i<n;i++)
{
  for(j=0;j<n-i;j++)   // for loop for no. of passes.
  {
  if (a[j]>a[j+1])   // for loop for no. of
  {
    temp=a[j];
    a[j]=a[j+1];       // swapping of greater no. (a[j]) with smaller no. (a[j+1])
    a[j+1]=temp;
  }
  }
}
}

int main()
{
int a[20],n,i;

printf("Enter no.of elements in array\n");
scanf("%d",&n);

printf("Enter elements in array\n");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("array with entered elements\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i],"\v");
}
 bubble_sort(a,n);
 printf("\nSorted array:\n ");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }
 getch();
 return 0;
}