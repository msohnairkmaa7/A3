#include <stdio.h>
int main() 
{
   float c,s,profit,loss, profitper,lossper;
   printf("enter the cost price and selling price");
   scanf("%f%f",&c,&s);
   if(c>s)
   { loss= c-s;
     lossper = (loss/c)*100;
     printf("%.2f is the lossper",lossper);
   }
   else
   { profit= s-c;
     profitper = (profit/c)*100;
     printf("%.2f is the profitper",profitper);
   }

}  