//continue
#include<stdio.h>
int main()
{
    int i,Limit,Number,Sum=0;
    printf("\nEnter The Limits :");
    scanf("%d",&Limit);
    for(i=1;i<=Limit;i++)
    {
        printf("\nEnter The Number : ");
        scanf("%d",&Number);
        printf("\n");
        if(Number==0)
            continue;
        Sum=Sum+Number;
    }
    printf("\nTotal : %d",Sum);
    return 0;
}
