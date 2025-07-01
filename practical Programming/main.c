#include<stdio.h>
int main()
{
    int rem , n =12345 ,sum = 0;
    while ( n > 0 )
    {
        rem = n % 10;
        sum = sum + rem;
        n   = n / 10;
    }
    printf("Sum of Digits = %d ", sum);
    return 0;
}
