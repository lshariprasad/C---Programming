#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("\nEnter The Value A : ");
    scanf("%d",&a);
    printf("\n");

    a+=a;
    printf("\nThe Value Of A is : %d ",a);
    printf("\n");

    printf("\nEnter The value B : ");
    scanf("%d",&b);
    printf("\n");

    b-=a;
    printf("\nThe Value Of B is : %d ",b);
    printf("\n");

    printf("\nEnter The Value C : ");
    scanf("%d",&c);
    printf("\n");

    c*=b;
    printf("\nThe Value Of C is : %d ",c);
    printf("\n");

    printf("\nEnter The Value D : ");
    scanf("%d",&d);
    printf("\n");

    d/=c;
    printf("\nThe Value Of D is : %d ",d);
    printf("\n");

    printf("\nEnter The Value E : ");
    scanf("%d",&e);
    printf("\n");

    e%=d;
    printf("\nThe Value Of E is : %d ",e);
    printf("\n");

    return 0;
}
