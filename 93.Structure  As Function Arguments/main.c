//Structure As Function Arguments

#include<stdio.h>

struct student  // Global function
{
    char *name;
    int   age;
    float per;
};
void display(struct student o)
{
    printf("\nName  :%s",o.name  );
    printf("\nAge   :%d",o.age   );
    printf("\nper   :%0.2f",o.per);

}
int main()
{
    struct student o={"SRIKRISHNA",18,100};
    display(o);

    return 0;
}
