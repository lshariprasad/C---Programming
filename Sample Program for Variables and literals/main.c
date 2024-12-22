#include<stdio.h>
int main()
{
    int e = 014;
    printf("%d \n",e);

    int b = 0x41;
    printf("%d \n",b);

    float c = 14.10f;
    printf("%0.2f \n",c);

    float g = 141e2f;
    printf("%f \n",g);

    char d = 'D';
    printf("%c \n",d);

    char a = 65;
    printf("%c \n",a);

    float h = 235e-2f;
    printf("%f \n",h);

    float i = 235e-2f;
    printf("%0.2f \n",i);

    return 0;
}
/*
e = 014 is OCT value
output be 12 for DEC and HEX
%d for int
%f for float or double
\n for next line
%0.2f for how many decimal points needed
*/
