//Call By Reference function

#include<stdio.h>

void swap(int *x,int *y)
{
   int temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
int main()
{
    int a,b;
    printf("\nEnter The Value Of A :");
    scanf("%d",&a);
    printf("\n");

    printf("\nEnter The Value Of B :");
    scanf("%d",&b);
    printf("\n");

    printf("\nBefore Swap A : %d",a);
    printf("\nAfter  Swap A : %d",b);
    swap(&a,&b);
    printf("\nBefore Swap B : %d",a);
    printf("\nAfter  Swap B : %d",b);
    return 0;
}
