//Preprocessor Directives -> Ex: Include is a preprocessor Directives

#include<stdio.h>
#define LIMIT 5
#define MSG "SRIKRISHNA"

#define custom_message(a)\
printf("\n" #a " Welcome to our institution")

int main()
{
    for(int i=0;i<LIMIT;i++)
    {
        printf("\n%d",i);
    }
    printf("\n");
    printf("\n%s",MSG);
    printf("\n");
    custom_message("SriKrinsha");
    printf("\n");

    printf("\nFile Name : %s",__FILE__);
    printf("\nTime      : %s",__TIME__);
    printf("\nLine      : %d",__LINE__);
    return 0;
}
