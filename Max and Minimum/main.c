#include<stdio.h>
int main()
{
    int a,b,c,max,min;

    printf("Enter The Value Of A : ");
    scanf("%d",&a);
    printf("\n");

    printf("Enter The Value Of B : ");
    scanf("%d",&b);
    printf("\n");

    printf("Enter The Value Of C : ");
    scanf("%d",&c);
    printf("\n");

    max = a;
    if ( b > max)
    {
        max = b;
    }
    if ( c > max)
    {
         max = c;
    }

    min = a;
    if ( b < min)
    {
        min = b;
    }
    if ( c < min)
    {
        min = c;
    }

    printf("The Maximum Value Is: %d ",max);
    printf("\n");
    printf("The Minimum Value Is: %d ",min);

    return 0;
}
