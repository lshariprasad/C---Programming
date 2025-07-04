/*
Write A Program To Find The Given Character Is Vowels Or not
Using Switch Case.
*/
 #include<stdio.h>
 int main()
 {
     char c;
     printf("\nEnter The Character : ");
     scanf("%c",&c);
     switch(c)
     {
     case 'a':
     case 'A':
        printf("\nA is a vowel Character");
        break;
     case 'e':
     case 'E':
        printf("\nE is a vowel Character");
        break;
     case 'i':
     case 'I':
        printf("\nI is a vowel Character");
        break;
     case 'o':
     case 'O':
        printf("\nO is a vowel Character");
        break;
     case 'u':
     case 'U':
        printf("\nU is a vowel Character");
        break;
     default :
        printf("%c Is Not A Vowel Character",c);
        break;
     }
     return 0;
 }
