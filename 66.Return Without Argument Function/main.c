//Return Without Argument function
#include<stdio.h>

int add();

int main()
{
    int a;
    a=add();
    printf("\nThe Total Value Of C : %d",a);
    return 0;
}
int add()
{
    int A,B,C;
    printf("\nEnter The Value OF A :");
    scanf("%d",&A);
    printf("\n");

    printf("\nEnter The Value Of B :");
    scanf("%d",&B);
    printf("\n");

    C=A+B;
    printf("\n");
}
