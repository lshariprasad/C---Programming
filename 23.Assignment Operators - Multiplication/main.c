#include<stdio.h.>
int main()
{
    int a,b;
    printf("\n Enter The Value A : ");
    scanf("%d",&a);
    printf("\n");

    a*=a;
    printf("\nThe Value Of A is : %d ",a);
    printf("\n");

    printf("\nEnter The Value B : ");
    scanf("%d",&b);
    printf("\n");

    b*=a;
    printf("\nThe Value of B is : %d ",b);
    printf("\n");

    a*=b;
    printf("\nThe Value Of A is : %d ",a);
    printf("\n");

    b*=b;
    printf("\nThe Value Of B is : %d ",b);
    printf("\n");
    return 0;
}
