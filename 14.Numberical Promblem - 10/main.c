/* If a Five-Digit Number Is Input Through The Keyboard,
   Write A Program To Reverse The Number. */

#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5,reverse;
    printf("\n Enter The Five Digit Number:");
    scanf("%d",&num);//12345
    printf("\n");

    d5=num%10;//5
    num=num / 10;//1234

    d4=num%10;//4
    num=num/10;//123

    d3=num%10;//3
    num=num/10;//12

    d2=num%10;//2
    num=num/10;//1

    d1=num;//1

    reverse=(d5*10000)+(d4*1000)+(d3*100)+(d2*10)+(d1*1);
    printf("\n The Reverse Value is :%d",reverse);
    printf("\n");

    return 0;
}
