#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter The Value A : ");
    scanf("%d",&a);
    printf("\n");

    a+=a;
    printf("\nThe Value Of A is : %d ",a);
    printf("\n");

    printf("\nEnter The Value B : ");
    scanf("%d",&b);

    a+=b;
    printf("\n The Value Of B : %d",a);
    printf("\n\n");

    b-=a;
    printf("The Value Of B is : %d ",a);
    printf("\n\n");

    a-=a;
    printf("The Value Of A is : %d ",a);
    printf("\n");

    return 0;
}
