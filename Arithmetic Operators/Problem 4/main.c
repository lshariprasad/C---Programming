/*
Problem 4:
 Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program
 to convert this temperature into Centigrade degrees.

   Formula : °C = (°F - 32) × 5/9;
*/

#include<stdio.h>
int main()

{
    float f,c;
    printf("\n Enter The Temperature   :");
    scanf("%f",&f);
    c=(f-32)*(5.0/9.0);
    printf("\n The Value Of Centigrade : %0.2f",c);
    return 0;
}
