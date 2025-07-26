//Program to find total no of even and odd numbers
//in an array in c programming.

#include<stdio.h>

int main()
{
    int a[100],i,n,e=0,o=0;
    printf("\nEnter The Limit :");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("\nEnter The Value :");
        scanf("%d",&a);

        //a[i]%2==0?e++:o++;   -> Single line code
        //Instead Of Using If and Else.
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("\nTotal Even Number is : %d",e);
    printf("\nTotal Odd  Number is : %d",o);

    return 0;
}
