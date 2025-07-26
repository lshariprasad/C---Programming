//Write a program to convert string to Lowercase in C program

#include<stdio.h>
int main()
{
    char a[100];
    int i;
    printf("\nEnter The String : ");
    gets(a);
    printf("\n");
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        a[i]=a[i]+32;
    }
    puts(a);
    return 0;
}
