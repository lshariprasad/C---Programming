/* If The Mark Obtained By a Student In Five Different Subject Are The Input Through The Keyboard.
Find Out The Aggregate Marks And Percentage Marks Obtained By The Student.
Assume That The Maximum Marks That Can Be Obtained By a Student In each Subject is 100 */

#include<stdio.h>
int main()
{
    float Tamil,English,Maths,Science,Social,Total,Percentage;
    printf("\nTotal Mark Obtained In Tamil :");
    scanf("%f",&Tamil);
    printf("\n");

    printf("\nTotal Mark Obtained In English :");
    scanf("%f",&English);
    printf("\n");

    printf("\nTotal Mark Obtained In Maths :");
    scanf("%f",&Maths);
    printf("\n");

    printf("\nTotal Mark Obtained In Science :");
    scanf("%f",&Science);
    printf("\n");

    printf("\nTotal Mark Obtained In Social :");
    scanf("%f",&Social);
    printf("\n");

    Total=Tamil+English+Maths+Science+Social;
    printf("\nTotal Mark Obtained In All Subject:%0.2f",Total);
    printf("\n");

    Percentage=Total/5;
    printf("\nTotal Percentage Obtained In All Subject:%0.2f",Percentage);
    printf("\n");
    return 0;
}
