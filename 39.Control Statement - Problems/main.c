/*
School Result Management
1.Five Marks Input Through The Keyboard
2.Find Total And Average Of The Given Marks.
3.Find The Result Whether The Given Marks Must be >=35
4.Grade as Per the Following Condition.
        90-100 - A Grade
        80-89  - B Grade
        70-79  - C Grade
        <70    - D Grade
        Fail   - No Grade
*/
 #include<stdio.h>
 int main()
 {
     int Mark1,Mark2,Mark3,Mark4,Mark5,Total;
     float Average;
     printf("\nEnter The Mark 1 : ");
     scanf("%d",&Mark1);
     printf("\n");

     printf("\nEnter The Mark 2 : ");
     scanf("%d",&Mark2);
     printf("\n");

     printf("\nEnter The Mark 3 : ");
     scanf("%d",&Mark3);
     printf("\n");

     printf("\nEnter The Mark 4 : ");
     scanf("%d",&Mark4);
     printf("\n");

     printf("\nEnter The Mark 5 : ");
     scanf("%d",&Mark5);
     printf("\n");

     Total=Mark1+Mark2+Mark3+Mark4+Mark5;
     printf("\nYour Total Marks  : %d  ",Total);
     Average=Total/5.0;
     printf("\nYour Average      : %0.2f  ",Average);

     if(Mark1>=35&&Mark2>=35&&Mark3>=35&&Mark4&&Mark5>=35)
     {
             printf("\nResult    :You Are Passed");
         if(Average>=90&&Average<=100)
         {
             printf("\nYour Grade: A");
         }
         else if(Average>=80&&Average<=89)
         {
             printf("\nYour Grade: B");
         }
         else if(Average>=70&&Average<=79)
         {
             printf("\nYour Grade: C");
         }
         else if(Average>=69&&Average<=60)
         {
             printf("\nYour Grade: D");
         }
     }
     else
     {
             printf("\nResult     :You Are Failed");
             printf("\nYour Grade   : No Grade");
     }
     return 0;
 }
