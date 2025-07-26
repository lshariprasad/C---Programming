//Display Fibonacci Sequence
//0 , 1 , 1, 2, 3, 5,

#include<stdio.h>
int main()
{
    int a=-1,b=1,c,n,i;
    printf("\nEnter The Limit :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("\n%d",c);
    }
    return 0;
}
