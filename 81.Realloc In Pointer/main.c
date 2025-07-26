//Realloc In pointer
//Realloc -> Recall Allocaate
//void *recall(void *ptr,size_t new_size
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr = (int *)malloc(3 * sizeof(int));  // Allocate memory for 3 integers

    if (ptr == NULL)
    {
        printf("Memory Not Available....\n");
        exit(1); // Corrected to 'exit'
    }

    printf("\nEnter 3 Nos:\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &ptr[i]);  // Use &ptr[i] instead of ptr+i
    }

    ptr = (int *)realloc(ptr, 5 * sizeof(int));  // Reallocate for 5 integers
    if (ptr == NULL)
    {
        printf("Memory Not Available after realloc...\n");
        exit(1);  // Always check realloc too
    }

    printf("Enter 2 more Nos:\n");
    for (i = 3; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("The 5 numbers are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }

    return 0;
}

