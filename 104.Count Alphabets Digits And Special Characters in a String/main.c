/*
  Program To Count Alphabets Digits And Special Characters In a String

  a = "Sri";
  0-S 1-r 2-i 3-\0

  // i -> for loop
    // a -> Alphabets
    // d -> Digits
    // s -> Special Characters

    // Cap Alphabets       = 65-90
    // low Alphabets       = 97-122
    // Numbers             = 48-57
    // Special Characters  =
*/
#include <stdio.h>

int main()
{
    char str[1000]; // Allocate memory to store the input string
    int i, a = 0, d = 0, s = 0;

    printf("\nEnter the String: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Remove newline character added by fgets
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            a++;
        else if(str[i] >= '0' && str[i] <= '9')
            d++;
        else
            s++;
    }

    printf("\nTotal Alphabets : %d", a);
    printf("\nTotal Digits    : %d", d);
    printf("\nTotal Special   : %d", s);

    return 0;
}
