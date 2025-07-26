//Appened in File
//We can print details without printing it...
#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("sample.txt","a");
    fprintf(fp,"Hello, I Am Sri...");
    fclose(fp);
    return 0;
}
