/*
  A cashier has currency notes of denomination 10,50 and 100;
  If the amount to be withdrawn is input through the keyboard in hundreds
  find the total number of currency notes of each denomination
  the cashier will have to give to the withdrawer.
*/

#include<stdio.h>
int main()

{
    int a,b,c,d,amount;
    a='100';
    b='50';
    c='10';
    printf("\n Enter The Amount To Be Withdrawn:");
    scanf("%d",&amount);
    printf("\n");

    a=(amount/100);
    printf("\n The Currency Note Of Rs 100 :%d ",a);
    printf("\n");

    b=((amount%100)/50);
    printf("\n The Currency Note Of Rs 50  :%d ",b);
    printf("\n");

    c=(((amount%100)%50)/10);
    printf("\n The Currency Note Of Rs 10  :%d ",c);
    printf("\n");

    d=(((amount%100)%50)%10);
    printf("\n Amount Still Remaining      :%d ",d);
    printf("\n");
    return 0;
}
