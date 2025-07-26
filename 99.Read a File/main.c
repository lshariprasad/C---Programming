//Read a File
//This is only for reading purpose.
// Read -> Write -> Appened
#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("sample.txt","r");
    if(fp==NULL);
    {
        printf("\nFile Not Found...");
    }
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)                //End Of Loop
            break;
        printf("%c",c);
    }
    return 0;
}
