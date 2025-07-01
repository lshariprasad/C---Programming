#include<stdio.h>
int main()
{
    int num =153, originalnum , rem , result = 0;
    originalnum = num;
    while(originalnum !=0 )
    {
        rem = originalnum % 10;
        result = result + ( rem * rem * rem );
        originalnum = originalnum / 10;
    }
    if ( result==num )
        printf("%d is an armstrong number \n",num);
    else
        printf("%d is not an armstrong number \n",num);
    return 0;
}
