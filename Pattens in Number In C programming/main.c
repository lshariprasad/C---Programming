#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter The Value Of n :");
    scanf("%d",&n);
    printf("\n");
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d",i+1);
        }
        printf("\n");
    }
    return 0;
}
