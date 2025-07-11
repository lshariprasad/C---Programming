#include<stdio.h>
#include<math.h>

int main()
{
    printf("\nSQRT   :%0.2f   ",sqrt(4));//Square Root
    printf("\nPOW    :%0.2f   ",pow(3,2));//Power
    printf("\nABS    :%d      ",abs(-1418));//Absolute value(Positive Value to Negative Value)
    printf("\nCEIL   :%0.2f   ",ceil(4.8));//CEIL rounds a number UP to the nearest integer
    printf("\nCEIL   :%0.2f   ",ceil(4.2));//CEIL rounds a number UP to the nearest integer
    printf("\nFLOOR  :%0.2f   ",floor(4.8));//FLOOR used to convert a floating point number to its immediately smaller integer (for eg, 4.8 to 4).
    printf("\nFLOOR  :%0.2f   ",floor(4.2));//FLOOR used to convert a floating point number to its immediately smaller integer (for eg, 4.2 to 4).
    printf("\nROUND  :%0.2f   ",round(4.8));//Round Off The nearest value
    printf("\nROUND  :%0.2f   ",round(4.2));//Round Off The nearest value
    return 0;
}
