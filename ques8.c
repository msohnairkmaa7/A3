#include <stdio.h>
int main() 
{
   int a;
   printf("enter the year");
   scanf("%d",&a);
   if(a%4 == 0)
   {
      printf("year is leap year\n");
   }
   else if(a%400 == 0)
   {
      printf("year is leap year\n");
   }
   else
   {
      printf("year is not a not leap year\n");
   }
   return 0;
}
