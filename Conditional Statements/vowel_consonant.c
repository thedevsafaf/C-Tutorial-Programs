#include <stdio.h>

int main()
{
    char ch,lower_vowel,upper_vowel;
    printf("enter the character:");
    scanf("%c", &ch);
    lower_vowel = (ch == 'a'|ch == 'e' |ch == 'i'|ch == 'o' |ch == 'u');
    upper_vowel = (ch == 'A'|ch == 'E' |ch == 'I'|ch == 'O' |ch == 'U');
    if (lower_vowel || upper_vowel)
        printf("%c is a vowel",ch);
    else
        printf("%c is a consonant!",ch);
    return 0;
}