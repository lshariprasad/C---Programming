#include<stdio.h>
int main()
{
    printf("\n Right Answer : 1");
    printf("\n Wrong Answer : 0");
    printf("\n");

    int a,b;
    printf("\nEnter The Value A :");
    scanf("%d",&a);
    printf("\n");

    printf("\nEnter The Value B :");
    scanf("%d",&b);
    printf("\n");

    printf("\n The Value A is Equal To B               : %d ",a==b);
    printf("\n");

    printf("\n The Value A is Greater Than B           : %d ",a>b);
    printf("\n");

    printf("\n The Value A is Less Than B              : %d ",a<b);
    printf("\n");

    printf("\n The Value A is Not Equal To B           : %d",a!=b);
    printf("\n");

    printf("\n The Value A is Greater Than Or Equal To : %d",a>=b);
    printf("\n");

    printf("\n The Value A is Less Than Or Equal To    : %d",a<=b);
    printf("\n");

    return 0;
}
