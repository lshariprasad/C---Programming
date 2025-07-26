//Union In C Programming
#include<stdio.h>

/*
       1.USer Define Data Type
       2.Union Memberss Share The Same Memory Location
       3.Union Size Is Based In Biggest Size Of A Data Type
*/
struct demo
{
    int  a;
    char b;
};
union udemo
{
    int a;
    char b;
}o;
int main()
{
    printf("\nInteger    : %d",sizeof(int));
    printf("\nchar       : %d",sizeof(char));
    printf("\nUnion Size : %d",sizeof(union udemo));
    printf("\nStruct size: %d",sizeof(struct demo));
    printf("\n");

    o.a=65;
    printf("\nUnion A    : %d",o.a);
    printf("\nUnion B    : %c",o.b);

    return 0;
}
