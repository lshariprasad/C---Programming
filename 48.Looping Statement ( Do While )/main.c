/*
       Do while
do
{
    ------
    ------
}
while(condition);
    Print Even Numbers
*/
#include<stdio.h>
int main()
{
    int i=0,n;
    printf("\nEnter The Limits : ");
    scanf("%d",&n);
    printf("\n");
    do
    {
        printf("\n%d",i);
        i+=2;
    }
    while(i<=n);
    return 0;
}
