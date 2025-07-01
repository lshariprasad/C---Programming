#include<stdio.h>
void main()
{
    int n,i,j,s;
    printf("Enter The Value of n :");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {
        for (s=0;s<i;s++)
                printf("  ");
        {
            for (j=0;j<2*(n-i)-1;j++)
            printf(" *");
        printf("\n");
        }
    }
    return 0;
}
