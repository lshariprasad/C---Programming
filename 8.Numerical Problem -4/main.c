/* Temperature Of A City In Fahrenheit Degrees is Input Through The KeyBoard.
   Write a Program To Convert This Temperature Into Centigrade Degrees.*/

 #include<stdio.h>
 int main()
 {
     float Fd,Cd;
     printf("\nEnter The Fahrenheit Degree :");
     scanf("%f",&Fd);
     printf("\n");

     Cd=(Fd - 32) * 5/9;
     printf("\nCentigrade Degrees is :%0.2f",Cd);
     printf("\n");

     return 0;
 }
