//For loop

#include<stdio.h>
int main()
{
    int i,n;
    printf("\nEnter The Limits :");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<=n;i+=2)
    {
        printf("\n%d",i);
    }
    return 0;
}
