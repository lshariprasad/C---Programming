/*
   ARITHMETIC OPERATOR
   *   /   %
   +   -
*/
#include<stdio.h>
int main()
{
    /* ADDITION */

    int a,b,c;
    printf("ADDITION");
    printf("\n Enter The First Digits Numbers :");
    scanf("%d",&a);
    printf("\n");
    /* THIS COMMAND SCANF USED FOR a ADDRESS OF %d */

    printf("\n Enter The Second Digits Numbers :");
    scanf("%d",&b);
    /* THIS COMMAND SCANF USED FOR b ADDRESS OF %d */
    printf("\n");

    c=a+b;
    printf("\n Total Value Of Give Two Digits : %d ",c);
    printf("\n\n");

    /* SUBRACTION */
    printf("SUBRACTION");
    printf("\n Enter The First Digit Number :");
    scanf("%d",&a);
    printf("\n");
    /* THIS COMMAND SCANF USED FOR a ADDRESS OF %d */

    printf("\n Enter The Second Digit Number :");
    scanf("%d",&b);
    printf("\n");

    c=a-b;
    printf("\n Difference Between Two Values: %d\n",c);
    printf("\n\n");

    /* MULTIPLICATION */
    printf("MULTIPLICATION");
    printf("\n Enter The First Digit Number : ");
    scanf("%d",&a);
    printf("\n");

    printf("\n Enter The Second Digit Number : ");
    scanf("%d",&b);
    printf("\n");

    c=a*b;
    printf("\n Multiple Of Both Values : %d",c );
    printf("\n\n");

    /* DIVISION */
    float cc;
    printf("Division");
    printf("\n Enter The First Digit Number : ");
    scanf("%d",&a);
    printf("\n");

    printf("\n Enter The Second Digit Number : ");
    scanf("%d",&b);
    printf("\n");

    cc=(float)a/(float)b;
    printf("Division Of Both Values : %0.2f ",cc);
    printf("\n\n");

    /* MODULAS */
    printf("\n Enter The First Digit Number :");
    scanf("%d",&a);
    printf("\n");

    printf("\n Enter The Second Digit Number : ");
    scanf("%d",&b);
    printf("\n");

    c=a%b;
    printf("\n Modulus Of Both Numbers : %d ",c);
    printf("\n");

    return 0;
}

