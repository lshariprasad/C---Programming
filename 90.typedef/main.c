//typedef in C Programming
//We can change the name;
#include<stdio.h>

typedef struct student
{
    char *name;
    int    age;
    float  per;
}student ;

int main()
{
    typedef int INTEGER;
    INTEGER a;
    student o;

     a= 100;
     printf("\n%d",a);
     o.name = "SRIKRISHNA";
     o.age  = 30;
     o.per  = 100;

     printf("\nName  : %s",o.name);
     printf("\nAge   : %d",o.age) ;
     printf("\nPer   : %0.2f",o.per) ;
    return 0;
}
