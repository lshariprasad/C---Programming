/*
Problem 5:
The Length & Breath of a rectangle and radius of a circle are input through the keyboard.
Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.

Formulas : Rectangle
      Area of rectangle          : l*b
      perimeter of rectangle     : 2(l+b)

Formulas : Circle
      Area of Circle             : πr^2
      Circumference of circle    : 2πr

      Since : π = 3.14

*/

#include<stdio.h>
int main()

{

    float l,b,r_area,r_peri;
    printf("\n Length Of The Rectangle     :");
    scanf("\n %f",&l);
    printf("\n Breath Of The Rectangle     :");
    scanf("\n %f",&b);
    r_area=l*b;
    r_peri=(2*(l+b));
    printf("\n Area of Rectangle           : %0.2f",r_area);
    printf("\n Perimeter of Rectangle      : %0.2f",r_peri);
    printf("\n");

    float r,c_area,c_peri;
    printf("\n Radius Of The Circle        :");
    scanf("\n %f",&r);
    c_area= 3.14*r*r ;
    c_peri= 2*3.14*r ;
    printf("\n Area of Circle              : %0.2f",c_area);
    printf("\n Circumference of Circle     : %0.2f",c_peri);

    return 0;
}
