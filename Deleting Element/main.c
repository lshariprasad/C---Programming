#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int n=5,i,pos=4;

    n=n-1;
    for (i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
