 #include<stdio.h>
 #include<string.h>
 int main()
 {
     char c[20],x[20];
     char a[20]={'S','R','I','\0'};//Every String has a group of characters and its should be end with \0
     char b[20]={'K','R','I','S','H','N','A','\0'};
     printf("%c",a[0]); // Print a Single letter
     printf("\n");
     printf("a : %s",a);//Print Whole letters
     printf("\nEnter The String : ");
     gets(c);
     printf("\n");
     printf("Compare       : %d",strcmp(a,c));//String Compare
     printf("\n");
     printf("Length        : %d",strlen(c));//String Length
     printf("\n");
     printf("UpperCase     : %s",strupr(c));//String Upper
     printf("\n");
     printf("LowerCase     : %s",strlwr(c));//String Lower
     printf("\n");
     printf("Copy          : %s",strcpy(x,c));//String Copy
     printf("\n");
     strcat(a,b);
     printf("Concatenation : %s",a);//String Concatenation means adding of Two Words
     printf("\n");
     printf("Reverse       : %s",strrev(c));//String Reverse
     printf("\n");

     return 0;
 }
