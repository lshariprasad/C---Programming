#include<stdio.h>
int main()
{
    int a=10;
    printf ("%d",a);
    /* THIS COMMAND WILL PRINT VALUE */
    printf("\n");

    int b=010;
    printf("%d",b);
    /* THIS COMMAND IS USED FOR OCT VALUE (LIKE BINARY VALUE)*/
    printf("\n");

    int c=0x41;
    printf("%d",c);
    /* THIS COMMAND IS USED FOR EXTRA DECIMAL VALUE */
    printf("\n");

    int d=25.5;
    printf("%d",d);
    /* THIS COMMAND IS USED FOR ROUNDOFF THE MINIUM VALUE */
    printf("\n");

    char e='E';
    printf("%c",e);
    /* THIS COMMAND IS USED FOR PRINT THE RHS VALUE */
    printf("\n");

    char f='F';
    printf("%d",f);
    /* THIS COMMAND IS USED FOR PRINT THE NUMBER INTO ASCII VALUE */
    printf("\n");

    char g=71;
    printf("%c",g);
    /* THIS COMMAND IS USED FOR PRINT THE ASCII VALUE INTO NUMBER */
    printf("\n");

    float h=14.18f;
    printf("%f",h);
    /* THIS COMMAND IS USED FOR PRINT THE DECIMAL VALUES */
    printf("\n");

    float i=1418e2;
    printf("%f",i);
    /* THIS COMMAND IS USED FOR PRINT THE EXPONENTIAL ^ 2 * 100 */
    printf("\n");

    float j=1418e2;
    printf("%0.2f",j);
    /* THIS COMMAND IS USED FOR PRINT THE EXPONENTIAL ^ 2 * 100 (ONLY SHOWS 2 DECIMAL POINTS) */
    printf("\n");

    float k=1418e-2;
    printf("%f",k);
    /* THIS COMMAND IS USED FOR PRINT THE EXPONENTIAL ^ 2 / 100 */
    printf("\n");

    float l=1418e-2;
    printf("%0.2f",l);
    /* THIS COMMAND IS USED FOR PRINT THE EXPONENTIAL ^ 2 / 100 (ONLY SHOWS 2 DECIMAL POINTS) */
    printf("\n");

    return 0;
}
