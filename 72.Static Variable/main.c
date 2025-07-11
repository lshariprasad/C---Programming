//Static Variable

#include<stdio.h>

void display();


int main()
{
    display();
    display();
    display();
    return 0;
}

void display()
{
    static int x=1; // This Static command Use to print a input value and again print the next input value.
    x++;
    printf("\n x : %d",x);
}
