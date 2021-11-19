#include <stdio.h>

int main()
{
    int month;

    printf("Enter monthk number (1-12): ");
    scanf("%d", &month);
    
    if (month == 4 || month == 6 || month == 9 || month == 11)
        printf("month has 30 days!");
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 11)
        printf("month has 31 days!");
    else if (month == 2)
        printf("month has 28/29 days!");
    else 
        printf("invalid month number!");

    return 0;
}