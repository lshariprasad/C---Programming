/* The Length And Breath Of a Rectangle And Radius Of a Circle are Input Through The Keyboard.
   Write a Program To Calculate The Area and Perimeter Of a Rectangle,
   The Area and Circumference Of The Circle.  */

#include<stdio.h>
int main()
{
    float Length,Breath,Rectangle,Area,Perimeter,Radius,Circumference,Circle;

    // Rectangle :

    printf("\nEnter The Length Of a Rectangle : ");
    scanf("%f",&Length);
    printf("\n");

    printf("\nEnter The Breath Of a Rectangle :");
    scanf("%f",&Breath);
    printf("\n");

    Area = Length * Breath;
    printf("\nArea Of Rectangle is : %0.2f ",Area);
    printf("\n");

    Perimeter= 2 * (Length + Breath);
    printf("\nPerimeter Of Rectangle is :%0.2f ",Perimeter );
    printf("\n\n");

    // Circle :

    printf("\nEnter The Radius Of a Circle: ");
    scanf("%f",&Radius);
    printf("\n");

    Area= 3.14 * Radius * Radius;
    printf("\nArea Of Circle is : %0.2f",Area);
    printf("\n");

    Circumference= 2 * 3.14 * Radius;
    printf("\nCircumference Of Circle is : %0.2f",Circumference);
    printf("\n");

    return 0;
}
