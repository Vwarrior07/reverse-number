#include <stdio.h>
int main()
{
    int a,b;
    printf("plase enter no a:");
    scanf("%i",&a);
    printf("plase enter no b:");
    scanf("%i",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%i,b=%i",a,b);
    return 0;
}