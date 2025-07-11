//No Return Without Argument Function
/*
      1.Function Declaration. -> To Declare the Function
      2.Function Definition.  -> To Define the Function
      3.Function Calling.     -> Calling the Function
*/
#include<stdio.h>

void add(); // Function Declaration

int main()
{
    add(); // Function Calling
    return 0;
}
void add() // Function Definition
{
    int A,B,C;
    printf("\nEnter The Value Of A : ");
    scanf("%d",&A);
    printf("\n");

    printf("\nEnter The Value Of B : ");
    scanf("%d",&B);
    printf("\n");

    C=A+B;
    printf("\nThe Total Value Of C :%d ",C);
    printf("\n");
}
