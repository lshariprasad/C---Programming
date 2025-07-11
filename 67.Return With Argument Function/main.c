//Return With Argument function
#include<stdio.h>
int add(int,int);
int main()
{
    int a,b;
    printf("\nEnter The Value A :");
    scanf("%d",&a);
    printf("\n");

    printf("\nEnter The Value B :");
    scanf("%d",&b);
    printf("\n");

    a=add(a,b);
    printf("\nThe Total Value Is : %d ",a);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
