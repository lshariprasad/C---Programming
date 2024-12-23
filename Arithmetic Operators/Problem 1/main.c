/*
Problem - 1:
  Ramesh's basic Salary is input through the keyboard. His Dearness Allowance is 40% of basic salary,
and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.

da  - Dearness Allowance.
bs  - Basic Salary.
hra - House Rent Allowance.
gs  - Gross Salary.
&   - Address Of

*/

#include<stdio.h>
int main()
{
    float bs,da,hra,gs;
    printf("\n Enter Your Basic Salary : ");
    scanf("\n %f",&bs);
    da=bs*0.4;
    hra=bs*0.2;
    gs=bs+da+hra;
    printf("\n Basic Salary         : %0.2f",bs);
    printf("\n Dearness Allowance   : %0.2f",da);
    printf("\n House Rent Allowance : %0.2f",hra);
    printf("\n Gross Salary         : %0.2f",gs);

    return 0;
}
