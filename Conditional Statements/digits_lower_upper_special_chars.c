#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
        printf("Its a lower-case alphabet");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Its an upper-case alphabet");
    else if (ch >= '0' && ch <= '9')
        printf("its a digit");
    else
        printf("Its a non alphabet character");
    return 0;
}