//linear(sequential)search example.
#include<stdio.h>
#include<conio.h>
int main()
{
int i,num,flag=1;
int a[5]={10,20,30,40,50};

printf("Enter a number to search: ");
scanf("%d",&num);

for(i=0;i<5;i++)
{
 if(num==a[i])
 {
  printf("Element is found on %d position",i+1);
  flag=0;
  break;
 }
}

if(flag==1)
{
printf("Search is unsuccessful");
}
return 0;
}