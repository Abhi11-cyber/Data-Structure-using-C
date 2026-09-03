#include<stdio.h>
#include<conio.h>
int multiplication(int,int);
void main()
{
    int a,b,ans;
    printf("Enter the numbers for multiplictation");
    scanf("%d%d",&a,&b);
    ans=multiplication(a,b);
    printf("multiplication of two numbers is %d",ans);
    getch();
}

int multiplication(int a,int b)
{
    static int product=0,i=0;
    if(i<a)
    {
        product=product+b;
        i++;
        multiplication(a,b);
    }
    return product;
}