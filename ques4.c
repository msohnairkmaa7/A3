#include <stdio.h>
int main() 
{
   int a;
   printf("enter the number");
   scanf("%d",&a);
   if((a&1) == 0)
   {
      printf("number is even\n");
   }
   else
   {
      printf("number is odd\n");
   }
   return 0;
}
