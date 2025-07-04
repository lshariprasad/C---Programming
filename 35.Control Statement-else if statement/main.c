#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter The Value A : ");
    scanf("%d",&a);
    printf("\n");

    if(a<0)
    {
        printf("\n The Given Value is Negative %d ",a);
    }
    else if(a==0)
    {
        printf("\nThe Given Value is Zero      %d ");
    }
    else if(a>0)
    {
        printf("\nThe Given Value is Positive  %d ",a);
    }

    return 0;
}
