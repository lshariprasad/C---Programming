/* In a town, The percentage of men is 52.
   The percentage of total literacy is 48.
   If total percentage Of literate men is 35 of the total population,
   write a program to find the total number of illiterate men and women
   if the population of the town is 80,000. */

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,Percentage;
    a ='Population';
    b ='Mens Population';
    c ='Womens Population';

    d ='Literacy Population In Percentage';
    e ='Literacy Total Population';
    f ='Literacy Mens Population';
    g ='Literacy Womens Population';

    h ='Illiterate Population';
    i ='Illiterate Mens Population';
    j ='Illiterate Womens Population';
    printf("\nEnter The Total Number Of Population :");
    scanf("%d",&a);
    printf("\n");

    printf("\nEnter The Percentage of Mens Population :");
    scanf("%d",&b);
    b=(b*a)/100;
    printf("\n Total Mens Population : %d ",b);
    printf("\n");

    c=a-b;
    printf("\n Total Women Population : %d",c);
    printf("\n");

    printf("\nEnter The Total Literacy Population In Percentage :");
    scanf("%d",&d);
    printf("\n");

    e=(d*a)/100;
    printf("\n Total Literacy Population :%d",e);
    printf("\n");

    printf("\nTotal Literacy Mens Percentage :");
    scanf("%d",&f);
    f=(f*a)/100;
    printf("\nTotal Literacy Mens :%d",f);
    printf("\n");

    g=e-f;
    printf("\n Total Literacy Womens Population :%d",g);
    printf("\n");

    h=a-e;
    printf("\n Total illiterate Population:%d ",h);
    printf("\n");

    i=b-f;
    printf("\n Total illiterate Mens Population :%d ",i);
    printf("\n");


    j=c-g;
    printf("\n Total illiterate Womens Population : %d ",j);
    printf("\n");

    return 0;
}
