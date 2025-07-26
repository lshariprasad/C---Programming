//C program to print greatest of n numbers in an array.
#include<stdio.h>
int main()
{
    int i,n,t,a[100];
    printf("\nEnter The Limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Value : ");
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=1;i<n;i++)
    {
        if(t<a[i])
            t=a[i];
    }
    printf("\nThe Greatest Number is %d",t);
    return 0;
}
