#include<stdio.h>
int main()
{
    int ch;
    printf("\nEnter The value : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nOne");
        break;
    case 2:
        printf("\nTwo ");
        break;
    case 3:
        printf("\nThree");
        break;
    default:
        printf("\n Invalid Number");
        break;
    }
    return 0;
}
