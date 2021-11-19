#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter three no:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c)
        printf("%d is bigger than %d,%d",a,b,c);
    else if(b>=a &&b>=c)
        printf("%d is bigger than %d,%d",b,a,c);
    else
        printf("%d is bigger than %d,%d",c,a,b);
    
    return 0;
}