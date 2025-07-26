//Pointer With Constant
#include<stdio.h>
#include<stdlib.h>

int main()
{

     /*
    //Case 1:

    char a[3] = {'a','b','c'};         // Character array initialization
    const char *p = a;                  // Pointer to const int, pointing to the character array

    printf("\n *p = %c", *p);          // Print value pointed by p

    //*p = 'x' ;                          // Invalid: cannot modify the value pointed to by p

    p++;                               // Valid: pointer itself can be moved to the next address
    printf("\n *p = %c", *p);          // Print new value after increment
    */


    /*
    //Case 2 :
    char a[3] = {'a','b','c'};
    char const *p = a;

    printf("\n *p = %c", *p);

    //*p = 'x' ;

     p++;

     printf("\n *p = %c ", *p);
     */

     /*
     //Case 3:
     char a[3] = {'a','b','c'};
     char *const p = a;

     printf("\n *p = %c", *p);

     *p = 'x';

     printf("\n *p = %c",*p);
    */

    /*
    //Case 4:
    char a[3] = {'a','b','c'};
    const char *const p = a;

    printf("\n *p = %c",*p);

    //*p = 'S';                // Because of Constant is appled

    //p++;                     // Because of Constant is appled

    printf("\n *p = %c",*p);

    */

    return 0;
}
