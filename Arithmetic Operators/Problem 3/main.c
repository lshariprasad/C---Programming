/*
Problem 3 :
If the marks obtained by a student in different subject are input through the keyboard,
find out the aggregate marks and percentage marks obtained by the student. Assume that the
maximum marks that can be obtained by a student in each subject is 100.

*/

#include<stdio.h>
int main()

{
    int m1,m2,m3,m4,m5,total;
    float avg;
    printf("\n Enter 1st Subject Marks :");
    scanf("%d",&m1);
    printf("\n Enter 2st Subject Marks :");
    scanf("%d",&m2);
    printf("\n Enter 3st Subject Marks :");
    scanf("%d",&m3);
    printf("\n Enter 4st Subject Marks :");
    scanf("%d",&m4);
    printf("\n Enter 5st Subject Marks :");
    scanf("%d",&m5);
    total= m1+m2+m3+m4+m5;
    avg=total/5.0;
    printf("\n Total : %d",total);
    printf("\n avg   : %0.2f",avg);
    return 0;
}
