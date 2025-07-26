//Intitializing & Accessing The Structure Members

#include<stdio.h>
struct student
{
    char *name;
    int    age;
    float  per;
};
int main()
{
    struct student o={"SRIKRISHNA" ,2006 ,100};

    printf("\nName       :%s"   ,o.name);
    printf("\nAge        :%d"   ,o.age );
    printf("\nPercentage :%0.2f",o.per );
    return 0;
}
