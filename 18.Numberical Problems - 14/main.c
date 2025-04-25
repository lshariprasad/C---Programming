/*
  If the total selling price of 15 items,
  The total profit earned on them is input through the keyboard,
  Write a Program To Find The Cost Price Of One Item.
*/

#include<stdio.h>
int main()
{
    float SellingPrice,Items,profit,CostPrice;
    printf("\n Enter The Selling price Of Items : ");
    scanf("%f",&SellingPrice);
    printf("\n");

    printf("\n Enter The Profit :");
    scanf("%f",&profit);
    printf("\n");

    printf("\n Enter The Number Of Items : ");
    scanf("%f",&Items);
    printf("\n");

    CostPrice = (SellingPrice-profit)/Items ;
    printf("\n Cost Price Of 1 Item is : %0.2f ",CostPrice);
    printf("\n");

    return 0;
}
