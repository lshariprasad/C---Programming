//Structure In C

/*
  1.Structure is a user define data type.
  2.Structure holds more than on element different data type.
*/

#include<stdio.h>
struct student
{
    char *name;
    int   age ;
    float per ;
};
int main()
{

    struct student o,o2;
    /*
    printf("\nSize Of Struct     : %d",sizeof(o));
    printf("\nSize Of char       : %d",sizeof(char));
    printf("\nSize Of int        : %d",sizeof(int));
    printf("\nSize Of float      : %d",sizeof(float));
    */

    o.name = "SRIKRISHNA";
    o.age  =  2006;
    o.per  =  100;

    printf("\nName  :%s",o.name);
    printf("\nage   :%d",o.age);
    printf("\nper   :%f",o.per);
    return 0;
}
