//goto label
#include<stdio.h>
int main()
{
    int a = 1;
    again:
    printf("\n %d",a);
    a++;
    if(a!=100)
    {
        goto again;
    }
    printf("\nEND");
    return 0;
}
