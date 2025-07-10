//ASCII American Standard Code For Information Interchange
/*
128 total character which is used mostly during program.

Total number of character in ASCII table is 256 (0 to 255).

0 to 31(total 32 character ) is called as ASCII control Characters
include 'Escape' , 'Backspace' and 'Delete'.

32 to 127 character is called as ASCII printable characters

128 to 255 is called as the extended ASCII codes
*/
 #include<stdio.h>
 int main()
 {
     int i;
     char a = 'a';
     char b = 'b';
     for(i=0;i<=255;i++)
     {
        printf("\n %d : %c",i,i);
     }
     printf("\n");
     printf("%c : %c",a,a-32);// 65-97=32
     printf("\n");
     printf("%c : %c",b,b-32);
     return 0;
 }
 /*
     65 to 90  ->  A to Z
     97 to 122 ->  a to z
     32        ->  Space
 */
