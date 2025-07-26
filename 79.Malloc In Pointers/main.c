//Malloc In Pointers
//This will installed Garbage Collection.
//This Is Used OF Single Integer.
//malloc -> memory allocation

//void* malloc(size_t size)

#include<stdio.h>
#include<stdlib.h>//This header use to find the size.
int main()
{
    int i,Limit;
    printf("\nEnter The Limit :");
    scanf("%d",&Limit);
    printf("\n");
    // ptr=Pointer Variable (short form)
    //Since (int *) used for (void *) function
    int *ptr=(int *)malloc(Limit*sizeof(int)); // Refer Code Line 4 (After Equal)
    if(ptr==NULL)
    {
        printf("Memory Not Available...");
        exit(1);
    }
    printf("\n");

    for(i=0;i<Limit;i++)
    {
        printf("Enter A Integer :");
        scanf("%d",ptr+i);
        printf("\n");
    }
    for(i=0;i<Limit;i++)
    {
        printf("%d  ",*(ptr+i));//
    }
    return 0;
}
