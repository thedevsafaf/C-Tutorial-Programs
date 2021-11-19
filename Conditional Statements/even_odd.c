#include <stdio.h>
#include <ctype.h>
int main()
{
    int n;
    printf("enter the no:");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Its an even no");
    else
        printf("Its an odd no");
    return 0;
}