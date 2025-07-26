//Generic Pointer or Void Pointer
#include<stdio.h>
int main()
{
    int a[]={10,20,30,40,50};
    void *p;
    p=a;
    printf("\n*p : %d",*(int *)p);
    return 0;
}
