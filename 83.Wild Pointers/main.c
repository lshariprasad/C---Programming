//Wild pointer
/*
   1.Wild Pointer is Also Called As Uninitialized pointer.
   2.This Pointer Usually Point to Some Arbitrary memory location.
   3.It may cause a program to crash.

Example :
*/

#include<stdio.h>
   int main()
{
   {
   int*p;
   *p=100;
   }

   printf("\n------------SOLUTION 1----------------------\n");
   //Assign The Address Of Correct Variable:
   {
       int a=10;
       int*p;
       *p=&a;
   }

   printf("\n------------SOLUTION 2----------------------\n");
   //Dynamically Allocate Memory And Add Values To it.
   {
       int*p=(int*)malloc(sizeof(int));
       *p=50;
   }
   return 0;
}
