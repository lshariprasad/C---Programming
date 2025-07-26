//double and Triple pointer

#include<stdio.h>
int main()
{
    int a=10,*d,*e,*v;
    int *s;

    s=&a;
    printf("\n The value of      A is   : %d",a);
    printf("\n The Address of    A is   : %d",&a);
    printf("\n The value of      S is   : %d",s);
    printf("\n The Address of    S is   : %d",&s);
    printf("\n The Dereferencing S is   : %d",*s);

    printf("\n--------------------------------------\n");

    int **r;
    r=&s;
    printf("\n The Dereferencing S is   : %d",*s);
    printf("\n The value of      S is   : %d",s);
    printf("\n The Address of    S is   : %d",&s);
    printf("\n The value of      R is   : %d",r);
    printf("\n The Address of    R is   : %d",&r);
    printf("\n The Dereferencing R is   : %d",**r);

    printf("\n--------------------------------------\n");

    int ***i;
    i=&r;
    printf("\n The Dereferencing R is   : %d",**r);
    printf("\n The value of      R is   : %d",r);
    printf("\n The Address of    R is   : %d",&r);
    printf("\n The value of      I is   : %d",i);
    printf("\n The Address of    I is   : %d",&i);
    printf("\n The Dereferencing I is   : %d",***i);

    printf("\n--------------------------------------\n");

    d=&a;
    e=&a;
    v=&a;

    printf("\nThe Value Of   A          : %d",a);
    printf("\n");
    printf("\nThe Value Of   D          : %d",d);
    printf("\nThe Address Of D          : %d",&d);
    printf("\nThe Value Of   E          : %d",e);
    printf("\nThe Address Of E          : %d",&e);
    printf("\nThe Value Of   V          : %d",v);
    printf("\nThe Address Of V          : %d",&v);
    printf("\n");

    printf("\n--------------------------------------\n");

    //Dereferencing Values :
     printf("\nThe Value Of D          : %d",*d);
     printf("\nThe Value Of E          : %d",*e);
     printf("\nThe Value Of V          : %d",*v);

     printf("\n--------------------------------------\n");

    return 0;

}
