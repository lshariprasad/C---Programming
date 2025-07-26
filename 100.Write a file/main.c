//Write a file
//We can write the file but once you easer in printf commend so,it will also easer...
// You Can Use Appened
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("sample.txt","w");
    fprintf(fp,"Hello, I Am Dev...");
    fclose(fp);
    return 0;
}
