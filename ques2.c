#include <stdio.h>
int main() 
{
   int a;
   printf("enter the number");
   scanf("%d",&a);
   if(a%10 == 0 || a%10 == 5)
   {
      printf("number is divisibe by 5\n");
   }
   else
   {
      printf("number is not divisible by 5");
   }
   return 0;
}
