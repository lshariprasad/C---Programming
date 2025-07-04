/*
Any Integer is Input Through The Keyboard.Write a Program to find out
whether it is an odd number or even number.
(Hint:Use the %(Modulus)operator)
*/
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter The Value : ");
    scanf("%d",&a);
    printf("\n");
    if(a%2==0)
    {
        printf("\n%d is Even Number",a);
    }
    else
    {
        printf("\n%d is Odd Number",a);
    }
    return 0;
}
