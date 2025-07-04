/*
Operator    Meaning
   ++       Increment(++a,a++)
   --       Decrement(--a,a--)
*/

#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter The Value A : ");
    scanf("%d",&a);
    printf("\n");

    //Pre-Increment Value :

    printf("\nPre-Increment  : %d ",++a); // After Increment Value.
    printf("\n");


    printf("\nMain Value A  : %d ",a);// Output of After Increment Value.
    printf("\n");

    //Post-Increment Value :

    printf("\nPost-Increment : %d ",a++); //Before Increment Value.
    printf("\n");

    printf("\nMain Value A  : %d ",a);// Output Of Before Increment Value.
    printf("\n");

    //Decrement Value :

    printf("\nPre-Decrement  : %d ",--a);
    printf("\n");

    printf("\nMain Value A : %d ",a);
    printf("\n");

    printf("\nPost-Decrement : %d ",a--);
    printf("\n");

    printf("\nMain Value A  : %d ",a);
    printf("\n");

    return 0;
}
