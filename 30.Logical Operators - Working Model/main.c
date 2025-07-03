#include<stdio.h>
int main()
{
    printf("The Give Value is True : 1");
    printf("\n");

    printf("The Give Value is False: 0");
    printf("\n");

    int a,b,c,d;
    printf("\nEnter Your Result : ");
    scanf("%d",&a);
    printf("\n");

    //USING AND COMMAND - If The Both Values are satisfied,Its Shows True.
    printf("\nLogical And          : %d ",(a>=35 && a<=100));

    //USING OR COMMAND - If Any One Value is satisfied, Its True.
    printf("\nLogical Or           : %d ",(a>=35 || a<=100));

    //USING WITHOUT NOT COMMAND - Commanded Value is satisfied, Its May be True or False depends on the value .
    printf("\nLogical Without Not  : %d ",(a>=35));

    //USING NOT COMMAND - Command Value is Not Satisfied, Its Shows 1.
    printf("\nLogical Not          : %d ",!(a>=35));

    return 0;
}
