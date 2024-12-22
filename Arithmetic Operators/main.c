/*
   Arithmetic Operator
   *  /  %   - High Present
   +  -      - Low  Present
   scanf()   - It is used to add any numbers they given in int()
   &a and &b - Represent The addition method, Used in scanf()
*/

#include<stdio.h>
int main()
{
    int a,b,c;
    float x;
    printf("\n Enter 1st Number :");
    scanf("%d",&a);
    printf("\n Enter 2nd Number :");
    scanf("%d",&b);
    c=a+b;
    printf("\n Total Number : %d",c);
    c=a-b;
    printf("\n Different Number : %d",c);
     c=a*b;
    printf("\n Multiple Number : %d",c);
     x=(float)a/(float)b;
    printf("\n Division Number : %0.2f",x);
     c=a%b;
    printf("\n MOodulas Number : %d",c);
    return 0;
}
