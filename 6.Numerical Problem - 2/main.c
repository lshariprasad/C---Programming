/* The Distance Between Two Cities (in Km.) is input through the keyboard.
   Write A Program To Convert and Print This Distance in meter,feet,inches and centimeters. */

#include<stdio.h>
int main()
{
    float Km,m,cm,ftm,inch;

    printf("\n Enter The Kilometer :");
    scanf("%f",&Km);
    printf("\n");

    m=Km*1000;
    printf("\n Distance In Meter : %0.2f",m);
    printf("\n\n");

    cm=m*100;
    printf("\n Distance In Centimeter : %0.2f",cm);
    printf("\n\n");

    ftm=cm/30.48;
    printf("\n Distance In Feet : %0.2f",ftm);
    printf("\n\n");

    inch=ftm/0.083;
    printf("\n Distance In Inch : %0.2f",inch);
    printf("\n\n");

    return 0;
}
