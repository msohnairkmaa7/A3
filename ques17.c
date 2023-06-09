#include<stdio.h>
int main()
{
    int a, b, c;
    printf("ENTER the side of the TRIANGLES");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b>c) && (b+c>a) && (a+b>c))
        printf("TRIANGLE which sides are %d %d %d is VALID",a,b,c);
    else
        printf("TRIANGLE which sides are %d %d %d is not VALID",a,b,c);
    return 0;
}