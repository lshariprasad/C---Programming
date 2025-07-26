//Calloc In pointer
//This will installed Zero Collection.
//calloc -> Clear Allocation
//This Is used for Double Integer

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,Limit;
    printf("\nEnter The Limit : ");
    scanf("%d",&Limit);
    printf("\n");

    int *ptr=(int *)calloc(Limit,sizeof(int));

    if(ptr==NULL)
    {
        printf("\nMemory Not Available .... ");
        exit(1);
        printf("\n");
    }
    for(i=0;i<Limit;i++)
    {
        printf("Enter a Integer : ");
        scanf("%d",ptr+i);
        printf("\n");
    }
    for(i=0;i<Limit;i++)
    {
        printf("\n%d : %d",&ptr+i,*(ptr+i));
        printf("\n");
    }

    return 0;
}
