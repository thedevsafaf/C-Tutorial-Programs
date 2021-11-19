#include <stdio.h>

int main()
{
    int n;
    printf("enter the no:");
    scanf("%d", &n);
    if(n<0)
        printf("%d is a negative no",n);
    else if(n>0)
        printf("%d is a positive no",n);
    else
        printf("%d is nothing but zero",n);
    
    return 0;
}
