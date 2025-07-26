//Dereferencing *value (or) Variable;
#include<stdio.h>
int main()
{
    int a=10,*b;
    b=&a;

    printf("\n The value of A is        : %d",a);
    printf("\n The Address of A is      : %d",&a);
    printf("\n The value of B is        : %d",b);
    printf("\n The Address of B is      : %d",&b);
    printf("\n The Dereferencing B is   : %d",*b);
    return 0;
}
