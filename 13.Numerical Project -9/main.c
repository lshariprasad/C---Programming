/* If a Five-Digit Number Is Input Through The Keyboard,
   Write a program to calculate the sum of its digits.
   (HINT : Use The modulus Operator '%') */

#include<stdio.h>
int main()

{
    int num,sum,d1,d2,d3,d4,d5;
    printf("\n Enter The Five Digit Value :");
    scanf("%d",&num);//12345
    printf("\n");

    d5= num%10;//5
    num=num/10;//1234

    d4=num%10;//4
    num=num/10;//123

    d3=num%10;//3
    num=num/10;//12

    d2=num%10;//2
    num=num/10;//1

    d1=num;//1

    sum=d5+d4+d3+d2+d1;
    printf("\n The Sum Of Its Digits: %d",sum);
    return 0;
}
