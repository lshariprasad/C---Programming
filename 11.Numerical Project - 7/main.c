/* With Using 3rd Variable */
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter Value a :");
    scanf("%d",&a);
    printf("\n");

    printf("\nEnter Value b :");
    scanf("%d",&b);
    printf("\n");

    printf("\n a : %d",a);
    printf("\n b : %d",b);
    printf("\n");

    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n a : %d",a);
    printf("\n b : %d",b);


    return 0;
}
