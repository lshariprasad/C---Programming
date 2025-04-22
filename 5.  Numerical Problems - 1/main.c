/* Ramesh's Basic Salary is input through the keyboard.
   His dearness allowance is 40% of basic salary and house rent allowance is 20% of basic salary.
   Write a program to calculate his gross salary.*/
 #include<stdio.h>
 int main()
 {

     float bs,da,hra,gs;

     // Basic Salary
     printf("\n Enter Your Basic Salary : ");
     scanf("%f",&bs);
     printf("\n");

     //Dearness Allowance
     da=(da/100)*bs;
     printf("\n Enter Your Dearness Allowance In Percentage : ");
     scanf("%f",&da);
     printf("\n");

     //House Rent Allowance
     hra=(hra/100)*bs;
     printf("\n Enter Your House Rent Allowance In Percentage : ");
     scanf("%f",&hra);
     printf("\n");

     //Gross Salary
     gs=bs+da+hra;
     printf("\n Total Gross Salary : %0.2f",gs);
     printf("\n");


     return 0;
 }
