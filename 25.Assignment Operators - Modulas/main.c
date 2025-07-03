#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter The Value A : ");
    scanf("%d",&a);
    printf("\n");

    a%=a;
    printf("\The Value Of A is : %d ",a);
    printf("\n");

    printf("\nEnter The Value Of B : ");
    scanf("%d",&b);

    a%=b;
    printf("\nThe Value Of B is : %d ",b);
    printf("\n");

    return 0;
}
