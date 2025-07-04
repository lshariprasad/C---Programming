#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter The Year : ");
    scanf("%d",&year);
    printf("\n");

    if(year%100==0)
    {
        if(year%400==0)
        {
            printf("\nIts Leap Year %d",year);
        }
    else
        {
            printf("\nIts Not Leap Year %d",year);
        }
    }
    else
    {
        if(year%4==0)
        {
            printf("\nIts Leap Year %d",year);
        }
        else
            {
                printf("\nIts Not Leap Year %d",year);
            }
    }

    return 0;
}
