#include <stdio.h>
#include <ctype.h>
int main()
{
    int age;
    printf("enter the age:");
    scanf("%d", &age);
    if (age < 18)
        printf("Sorry not eligible for voting");
    else
        printf("Congrats");
    return 0;
}