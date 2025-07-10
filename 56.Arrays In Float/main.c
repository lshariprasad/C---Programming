// Float
#include<stdio.h>
int main()
{
    int   i,Limits;
    float a[100];
    printf("\nEnter The Limits : ");
    scanf("%d",&Limits);
    printf("\n");
    for(i=0;i<=Limits;i++)
    {
        printf("\nEnter The Number : ");
        scanf("%f",&a[i]);
        printf("\n");
    }
    for(i=0;i<=Limits;i++)
    {
        printf("\n%f",a[i]);
        printf("\n");
    }
    return 0;
}
