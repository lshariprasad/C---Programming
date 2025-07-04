#include<stdio.h>
int main()
{
    char name[15];
    int age;
    printf("\nEnter Your Name : ");
    scanf("%s",name);
    printf("\n");

    printf("\nEnter Your Age  : ");
    scanf("%d",&age);
    printf("\n");
    if(age>=18)
    {
        printf("\n %s age is %d Eligible For Vote",name,age);
    }
    return 0;
}
