//Input and Output Function

#include<Stdio.h>
int main()
{
    int a;
    char c;
    char name[50];
    printf("\nEnter The Value Of A : "); // Output function
    scanf("%d",&a);                      // Input  function
    printf("\n A : %d",a);
    printf("\nEnter The Character  : ");
    fflush(stdin);
    c=getchar();
    putchar(c);
    printf("\n");
    fflush(stdin);
    printf("\nEnter Name :");
    gets(name);
    puts(name);
    printf("\n");
    return 0;
}
