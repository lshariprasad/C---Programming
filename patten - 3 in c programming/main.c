#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter The Value of n : ");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
