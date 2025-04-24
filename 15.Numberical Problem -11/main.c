/* If a four-digit number is input through the keyboard,
   Write a program obtain the sum of the first and last digit of this number. */

#include<stdio.h>
int main()
{
    int num,d1,d2,d3,d4,d5,sum;
    printf("\nEnter The Four digit Number :");
    scanf("%d",&num);//1234
    printf("\n");

    d5=num%10;//4
    num=num/10;//123

    d4=num%10;//3
    num=num/10;//12

    d3=num%10;//2
    num=num/10;//1

    d2=num%10;//1
    num=num/10;//0

    d1=num;//0

    sum=d5+d2;
    printf("\nSum Of First And Last Digit :%d",sum);
    printf("\n");
    return 0;
}
