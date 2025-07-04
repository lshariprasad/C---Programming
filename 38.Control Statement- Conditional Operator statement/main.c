//conditional operator Statement ?:

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\nEnter The A value :");
    scanf("%d",&a);
    printf("\n");

    printf("\nEnter The B Value :");
    scanf("%d",&b);
    printf("\n");

    c=a>b?a:b;
    printf("\nThe Greatest Number is %d",c);
    printf("\n");
    return 0;
}
