#include<stdio.h>
int main()
{

    int a[5]={1,2,3,4,5};
    int n=5,i,pos,value;

    printf("Enter The Value    : ");
    scanf("%d",&value);
    printf("\n");

    printf("Enter The Position : ");
    scanf("%d",&pos);
    printf("\n");

    n=n+1;
    for (i=n-1;i>=pos;i--)
    {
        a[i]=a[i-1];

    }
    a[pos-1]=value;
    for (i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
