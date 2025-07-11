//No Return With Argument function
#include<stdio.h>

// Function Declaration
void add(int,int);

int main()
{
    int A,B;
    printf("\nEnter The Value A : ");
    scanf("%d",&A);
    printf("\n");

    printf("\nEnter The Value B : ");
    scanf("%d",&B);
    printf("\n");

    // Function Calling
    add(A,B);// Actual Parameters
    return 0;
}
// Function Definition
void add(int X,int Y) //Formal Parameters
{
    int C;
    C=X+Y;
    printf("\nThe Total Value Of C :%d ",C);
    printf("\n");
}
