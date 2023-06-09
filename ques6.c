#include <stdio.h>
int main() 
{
   int a,b;
   printf("enter two number");
   scanf("%d%d",&a,&b);
   if(a>b)
   {
     printf("a is greater than b");
   }
   else if(a==b)
   {
    printf("both are same");
   }
   else
   {
    printf("b is greater than a");
   }

}  