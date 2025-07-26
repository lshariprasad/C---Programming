//Array Of Structure Object

#include<stdio.h>

struct student
{
    char *name;
    int   age;
    float per;
};
int main()
{
    struct student o[2];
    o[0].name = "SRI";
    o[0].age  = 18;
    o[0].per  = 100;

    o[1].name = "DEV";
    o[1].age  = 18;
    o[1].per  = 100;

    printf("\n-------------------------");
    printf("\nName  :%s",o[0].name  );
    printf("\nAge   :%d",o[0].age   );
    printf("\nper   :%0.2f",o[0].per);
    printf("\n-------------------------\n");

    printf("\n-------------------------");
    printf("\nName  :%s",o[1].name  );
    printf("\nAge   :%d",o[1].age   );
    printf("\nper   :%0.2f",o[1].per);
    printf("\n-------------------------\n");

    return 0;
}
