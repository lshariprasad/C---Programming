#include<stdio.h>
#include<string.h>
struct Person
{
    char Name[50];
    int citNo;
    float salary;

}p1;
int main()
{
    strcpy (p1.Name,"Raj Kumar");

    p1.citNo  = 1934;
    p1.salary = 25000;

    printf("Name : %s\n ",p1.Name);
    printf("Citizenship No : %d\n ",p1.citNo);
    printf("Salary : %0.2f\n",p1.salary);

    return 0;
}
