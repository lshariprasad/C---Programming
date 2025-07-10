//Arrays
#include<stdio.h>
int main()
{
    int i,a[100],Limits;
    printf("\nEnter The Limits : ");
    scanf("%d",&Limits);
    printf("\n");
    for(i=0;i<=Limits;i++)
    {
        printf("\nEnter The Value : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=Limits;i++)
        {
        printf("\n%d",a[i]);
        printf("\n");
        }
    return 0;
}
