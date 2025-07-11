//Global Variable -> Common To All Inputs.

#include<stdio.h>

void display();

int a=10; // Common Input is Given

int main()
{
    printf("\nThe Value Of A is : %d",a); // Its can access other inside of a program.
    display();
    return 0;
}

void display()
{
    a++;
    printf("\nThe Value Of A is : %d",a);// Same we can access a in this place.
}

