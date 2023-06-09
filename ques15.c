#include<stdio.h>
 int main()
 {
     int x;
     printf("Enter a number\n");
     scanf("%d",&x);
     if(x>0)
        printf("%d is POSITIVE",x);
     else if(x<0)
        printf("%d is NEGATIVE",x);
     else
        printf("%d is ZERO ",x);
     return 0;
 }