#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20];
    int i,num,n,flag=1,upper,lower=0,mid;
    printf("enter size of array: ");
    scanf("%d",&n);
    upper=n-1;
    printf("enter elements in array :");
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    printf("array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("\nEnter element to search in array:\n ");
    scanf("%d",&num);

    while(lower<=upper)
    {
      mid=(lower+upper)/2;
       if(num==a[mid])
       { printf("element is found");
         flag=0;
         break;
       }

       else if(num>a[mid])
       {
        lower=mid+1;
       }
       else
       {
        upper=mid-1;
       }
    }
     if(flag==1)
     {
        printf("search is unsuccessful");
     }
    return 0;
}