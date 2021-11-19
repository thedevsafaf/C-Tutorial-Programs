#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i=0, word=0, chr=0;
    printf("\nEnter Your String: ");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            word++;
            chr++;
        }
        else
            chr++;
        i++;
    }
    printf("\nNumber of characters: %d", chr);
    printf("\nNumber of words: %d", word+1);
    return 0;
}