/* Two Number are Input Through The Keyboard Into Two Location C and D.
   Write a Program To Interchange The Contents Of C and D.*/

 /* Swapping In C programming */

 #include<stdio.h>
 int main()
 {
     int C,D,Z;
     printf("\n Enter The C value : ");
     scanf("%d",&C);
     printf("\n");

     printf("\n Enter The D value : ");
     scanf("%d",&D);
     printf("\n");

     printf("\n C : %d ",C);
     printf("\n D : %d ",D);
     printf("\n\n");

     Z=D;
     D=C;
     C=Z;

     printf("\n C : %d",C);
     printf("\n D : %d",D);

     return 0;
 }

