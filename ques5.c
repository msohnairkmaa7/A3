#include <stdio.h>
int main() 
{
   int a;
   printf("enter the number");
   scanf("%d",&a);
   if(a>99 && a<1000)
   {
      printf("this is 3 digit number\n");
   }
   else
   {
      printf("this is not 3 digit number\n");
   }
   return 0;
}
