#include <stdio.h>
int main() 
{
   char ch;
   printf("enter the alphabet");
   scanf("%c",&ch);
   if(ch>='A' && ch<= 'Z')
   {
      printf("this is upper case alphabet\n");
   }
   else
   {
      printf("this is lower case alphabet\n");
   }
   return 0;
}
