#include<stdio.h>
int main()
{
    int Age;
    char Name[20];
    printf("\nEnter Your Name : ");
    scanf("%s",Name);
    printf("\n");

    printf("\nEnter Your Age  : ");
    scanf("%d",&Age);
    printf("\n");

    if(Age>=18)
    {
        printf("\n %s age is %d Eligible For Vote",Name,Age);
    }
    else
    {
        printf("\n%s age is %d Not Eligible For Vote",Name,Age);
    }

    return 0;

}
