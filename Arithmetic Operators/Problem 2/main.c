/*
Problem 2:
The distance between two cities ( in km.) is input through the keyboard. Write a program to convert
and print this distance in meter,feet,inches and centimeters.

*/

#include<stdio.h>
int main()

{
    float km,m,cm,ft,i;
    printf("\n Enter the Kilometer :");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    i=cm/2.54;
    ft=i/12;
    printf("\n km  : %0.2f",km );
    printf("\n m   : %0.2f",m );
    printf("\n cm  : %0.2f",cm );
    printf("\n i   : %0.2f",i );
    printf("\n ft  : %0.2f",ft );

    return 0 ;
}
