/*
Three digit number input through the keyboard write a program
to find the given number is Armstrong number or not.

Armstrong Means The given Each digit of a number is multiple with 3 times and add all the numbers.
The Given Question Number = The Result
     EX :            153  = 153
*/
#include<stdio.h>
int main()
{
    int n,a,d1,d3,d2,sum;
    printf("\nEnter 3 Digit No : ");
    scanf("%d",&n);
    printf("\n");
    printf("\nThe Entered No : %d ",n);//153
    printf("\n");
    d3=n%10;// 3
    a=n/10;//  15
    d2=a%10;// 5
    d1=a/10;//  1
    sum=(d3*d3*d3)+(d2*d2*d2)+(d1*d1*d1);
    if(sum==n)
    {
        printf("\nThe Armstrong Number is : %d ",sum);
    }
    else
    {
        printf("\nThis is not an Armstrong Number is : %d ",sum);
    }
    printf("\n");


    return 0;
}
