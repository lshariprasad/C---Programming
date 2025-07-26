//Program to print multiplication tables

#include<stdio.h>

int main()
{
    int i,t,n;
    //t -> Table
    //n -> Limit
    printf("\nEnter The Table Name :");
    scanf("%d",&t);
    printf("\n");

    printf("\nEnter The Limit      :");
    scanf("%d",&n);
    printf("\n");

    for(i=1;i<=n;i++)
    {
        printf("\n%d X %d = %d",t,i,(t*i));
    }
    return 0;
}
