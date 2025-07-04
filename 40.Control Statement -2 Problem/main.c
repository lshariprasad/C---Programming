/*
A Library Charge A Fine Every Book Returned Late.
For First 5 Days, The Fine is 50 Paise,
For 6-10 Days Fine Is One Rupee And
Above 10 Days Fine is 5 Rupees.
If You Return The Book After 30 Days You Membership will be canceled.
Write a Program To accept The Number Of Days
 The Member Is Late To return
the Book And Display The Fine Or The Appropriate Message.
*/
#include<stdio.h>
int main()
{
    int days,paise,rupees;
    printf("\nEnter The Days : ");
    scanf("%d",&days);

    if(days>=1 && days<=5)
    {
        printf("\nFine Amount 0.50 Paise");
    }
    else if (days>=6 && days<=10)
        {
          printf("\nFine Amount 1 Rupees");
        }
        else if(days>=11 && days<=29)
        {
            printf("\nFine Amount 5 Rupees");
        }
        else
        {
            printf("\nYour Membership Has Been canceled");
        }

    return 0;
}
