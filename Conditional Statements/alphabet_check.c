#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character:");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z'))
        printf("Its an alphabet");
    else
        printf("Its a non alphabet character");
    return 0;
}