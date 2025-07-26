//Access Member Of structure using pointer.

#include<stdio.h>

struct student
{
    char *name;
    int   age;
    float per;
};
int main()
{
    struct student o={"SRIKRISHNA",18,100};
    struct student *ptr=&o;

    printf("\nName  :%s",ptr->name  );
    printf("\nAge   :%d",ptr->age   );
    printf("\nper   :%0.2f",ptr->per);

    return 0;
}
