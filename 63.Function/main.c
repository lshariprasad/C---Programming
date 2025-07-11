#include<stdio.h>

void add()
{
    int A,B,C;
    printf("\nEnter The Value Of A : ");
    scanf("%d",&A);
    printf("\n");

    printf("\nEnter The Value Of B : ");
    scanf("%d",&B);
    printf("\n");

    C=A+B;
    printf("\nThe Value Of C : %d ",C);
    printf("\n");
}
int main()
{
    int Limits,i;
    printf("\nEnter The Limits : ");
    scanf("%d",&Limits);
    for(i=0;i<Limits;i++)
    {
        add();
    }
    return 0;
}
