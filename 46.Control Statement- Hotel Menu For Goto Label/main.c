/*goto label in Hotel
                      MENU LIST
                  1.COFFEE        Rs=15
                  2.TEA           Rs=20
                  3.COLD COFFEE   Rs=30
                  4.MILK SHAKE    Rs=50
*/
#include<stdio.h>
int main()
{
    int Choice,Quantity,TotalAmount,TotalPrice,net=0,a;
    MENULIST:
    printf("\t\t       MENU LIST");
    printf("\n");
    printf("\t\t1. COFFEE       Rs=15 ");
    printf("\n");
    printf("\t\t2. TEA          Rs=10 ");
    printf("\n");
    printf("\t\t3. COLD COFFEE  Rs=30 ");
    printf("\n");
    printf("\t\t4. MILK SHAKE   Rs=50 ");
    printf("\n");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&Choice);
    switch(Choice)
    {
    case 1:
        printf("\nYou Have Selected COFFEE ");
        printf("\n");
        printf("Enter Your Quantity : ");
        scanf("%d",&Quantity);
        TotalPrice=Quantity*15;
        net=net+(TotalPrice);
        printf("\n");
        break;
    case 2:
        printf("\nYou Have Selected TEA   ");
        printf("\n");
        printf("Enter Your Quantity : ");
        scanf("%d",&Quantity);
        TotalPrice=Quantity*10;
        net=net+(TotalPrice);
        printf("\n");
        break;
    case 3:
        printf("\nYou Have Selected COLD COFFEE ");
        printf("\n");
        printf("Enter Your Quantity :");
        scanf("%d",&Quantity);
        TotalPrice=Quantity*30;
        net=net+(TotalPrice);
        printf("\n");
        break;
    case 4:
        printf("\nYou Have Selected MILK SHAKE");
        printf("\n");
        printf("Enter Your Quantity :");
        scanf("%d",&Quantity);
        net=net+(TotalPrice);
        printf("\n");
        break;
    default :
        printf("\nYou Selected Item Is Invalided  ");
        break;
    }
    printf("\nDo You Wanted To Continue Press 1 : ");
    scanf("%d",&a);
    if(a==1)
    {
        goto MENULIST;
    }
        printf("\nTotal Amount :%d ",net );
        printf("\nThank You Come Again ");

    return 0;
}
