/*
  Looping Statement

  1.Entry Check Loop
     While
     For
  2.Exit Check Loop
     do while

*/
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter The Limits : ");
    scanf("%d",&n);
    printf("\n");
    while(i<=n)
    {
        printf("\n%d",i);
        i++;
    }
    printf("\nEND");
    return 0;
}
