/* With Using Multiple And Division Method */
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter value a :");
    scanf("%d",&a);
    printf("\n");

    printf("\n Enter value b :");
    scanf("%d",&b);
    printf("\n");

    printf("\n a : %d",a);
    printf("\n");

    printf("\n b : %d",b);
    printf("\n");

    a=a*b;
    b=a/b;
    a=a/b;

    printf("\n a : %d",a);
    printf("\n");

    printf("\n b : %d",b);
    printf("\n");

    return 0;
}
