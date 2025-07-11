
#include<stdio.h>
#include<string.h>
int main()
{
    char c[12]={'S','R','I','K','R','I','S','H','N','A'};
    printf("%c",c[0]);//Print a Single Letter
    printf("\n");
    printf("\nEnter The String : ");
    //scanf("%s",c); // Because, If we Leave Space its take next word or a letter will be 2 input
    gets(c);//This will print as it as
    printf("%s",c);
    return 0;
}
