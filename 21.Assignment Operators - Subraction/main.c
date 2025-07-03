#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter The Value A :");
    scanf("%d",&a);
    printf("\n");

    a-=a;
    printf("\nThe Value Of A : %d",a);
    printf("\n");

    printf("\nEnter The Value B :");
    scanf("%d",&b);
    printf("\n");

    a-=b;
    printf("\nThe Value Of B : %d",b);
    printf("\n");

    return 0;
}
