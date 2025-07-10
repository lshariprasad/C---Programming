#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100];
    int i,j,n,m;
    printf("\nEnter The Number Of Rows    : ");
    scanf("%d",&n);
    printf("\n");

    printf("\nEnter The Number Of Columns : ");
    scanf("%d",&m);
    printf("\n");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\nEnter The Value a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
            printf("\n");
        }
    }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            printf("\nEnter The Value b[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
            printf("\n");
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
            c[i][j]=a[i][j]*b[i][j];
            printf("\t%d",c[i][j]);
            }
            printf("\n");
        }
    return 0;
}
