#include <stdio.h>
int main()
{
    float a,b,c,D;
    printf("enter the value of cofficient of quarditic eqaution");
    scanf("%f%f%f",&a,&b,&c);
    D = b*b-4*a*c;
    if(D>0)
    {
    printf("the roots are real and distinct");
    }
    else if(D==0)
    {
    printf("the roots are real and equal");
    }
    else{
        printf("roots are imaginary");
    }
}
