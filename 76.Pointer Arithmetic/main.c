//Pointer Arithmetic

#include<stdio.h>
int main()
{
    int a=10;
    int *p,*r;
    p=&a;
    r=p+1;
    printf("\nSize Of Integer   :%d",sizeof(a));
    printf("\nP Value           :%d",p);
    printf("\nR Value           :%d",r);
    return 0;
}
