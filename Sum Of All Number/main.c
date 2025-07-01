#include<stdio.h>
int main()
{
    int sum = 0 , rem , n =1234 ;
    while ( n > 0)
    {
        rem = n % 10;
        sum = sum + rem ;
        n = n / 10;

    }
     printf( " Sum Of Digits = %d ",sum);
     return 0;
}
