//Pointer Handle array
#include<stdio.h>
int main()

{
    int a[]={10,20,30,40,50};
    int *p;

    /*
       10 -> 6422064
       20 -> 6422068
       30 -> 6422072
       40 -> 6422076
       50 -> 6422080
    */
    p=&a;

    printf("\nSize Of Integer     : %d",sizeof(int));//4
    printf("\nSize of value A     : %d",sizeof(a));//20
    printf("\nLength Of value A   : %d",sizeof(a)/sizeof(int));//5
    printf("\nAddress Of Value A  : %d",&a);//6422064
    printf("\nValue Of A          : %d",p);//6422064
    printf("\n");

    p++;
    printf("\nValue Of P          : %d",p);
    printf("\nValue Of P          : %d",*p);
    printf("\n");

    printf("\nValue Of P          : %d",*++p);
    printf("\nValue of p          : %d",++*p);
    printf("\n");

    p--;
    printf("\nValue Of P          : %d",p);
    printf("\nValue Of P          : %d",*p);
    printf("\n");

    printf("\nValue Of P          : %d",*--p);
    printf("\nValue of p          : %d",--*p);
    printf("\n");
    return 0;
}

