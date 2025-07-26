//Local And Global Scope Structure
 #include<stdio.h>

 struct student // Global Scope
 {
     char *name;
     int    age;
     float  per;
 };

 void total()//Local Scope
 {
     struct mark
     {
         int m1,m2,m3;
     }s;
     s.m1 = 100;
     s.m2 = 99;
     s.m3 = 98;

     printf("\nMark-1  : %d",s.m1);
     printf("\nMark-2  : %d",s.m2);
     printf("\nMark-3  : %d",s.m3);
 }

 int main()
 {
     struct student o;
     o.name = "SRIKRISHNA";
     o.age  = 30;
     o.per  = 100;

     printf("\nName  : %s",o.name);
     printf("\nAge   : %d",o.age) ;
     printf("\nPer   : %0.2f",o.per) ;
     total();
     return 0;

 }
