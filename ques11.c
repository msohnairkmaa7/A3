#include <stdio.h>
int main() 
{
   float e,h,m,s,ss,percentage;
   printf("enter the marks of 5 subjects");
   scanf("%f%f%f%f%f",&e,&h,&m,&s,&ss);
   percentage = ((e+h+m+s+ss)/500)*100;
   if(percentage>33)
   { 
    printf("the student is pass\n");
   }
   else
   { 
     printf("the student is fail\n");
   }

}  