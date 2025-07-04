/*
Write a program from the following output using switch case

     MENU CARD
        1. COFFEE        Rs : 15
        2. TEA           Rs : 10
        3. COLD COFFEE   Rs : 30
        4. MILK SHAKE    Rs : 50

     Enter Your Choice : 2

     You Have Selected Tea
     Enter The Quantity : 5
     Total Amount : 50
*/
#include<stdio.h>
int main()
{
    int Choice ,Quantity , TotalPrice;
    printf("\t\t          MENU CARD");
    printf("\n\n");
    printf("\t\t1. COFFEE         Rs : 15");
    printf("\n");
    printf("\t\t2. TEA            Rs : 10");
    printf("\n");
    printf("\t\t3. COLD COFFEE    Rs : 30");
    printf("\n");
    printf("\t\t4. MILK SHAKE     Rs : 50");
    printf("\n");
    printf("\nEnter Your Choice : ");
    scanf("%d",&Choice);
    switch(Choice)
    {
    case 1:
        printf("\nYou Have Selected Item : COFFEE");
        printf("\nEnter Your Quantity : ");
        scanf("%d",&Quantity);
        TotalPrice = Quantity*15;
        printf("\n");
        printf("\nThe Total Amount Is : %d ",TotalPrice);
        printf("\n");
        break;

    case 2:
        printf("\nYou Have Selected Item : TEA");
        printf("\n");
        printf("\nEnter Your Quantity : ");
        scanf("%d",&Quantity);
        TotalPrice = Quantity*10;
        printf("\nThe Total Amount Is : %d ",TotalPrice);
        printf("\n");
        break;

    case 3:
        printf("\nYou Have Selected Item : COLD COFFEE");
        printf("\n");
        printf("\nEnter Your Quantity : ");
        scanf("%d",&Quantity);
        TotalPrice = Quantity*30;
        printf("\nThe Total Amount Is : %d",TotalPrice);
        printf("\n");
        break;

    case 4:
        printf("\nYou Have Selected Item : MILK SHAKE");
        printf("\n");
        printf("\nEnter Your Quantity :");
        scanf("%d",&Quantity);
        TotalPrice = Quantity*50;
        printf("\nThe Total Amount Is : %d",TotalPrice);
        printf("\n");

    default :
        printf("\n");
        printf("\nYou Entered Invalid MENU CARD");
        printf("\n");
        break;
    }

    return 0;
}
