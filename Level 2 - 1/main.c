#include<stdio.h>
int main()
{
    int i,j,k;
    int a[2][2]={2,3,5,6};
    int b[2][2]={0,9,6,4};
    int c[2][2]={8,6,4,1};


    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
