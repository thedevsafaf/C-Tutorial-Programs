#include <stdio.h>
int main(){
    char letter;
    printf("Enter the character: ");
    scanf("%c",&letter);
    printf("ASCII of the %c is %d.",letter,letter);
    return(0);
}

/*

ASCII is an acronym for American Standard Code for Information Interchange.

It is a code that uses numbers to represent characters. Each letter is assigned a number between 0 and 127.

A upper and lower case character are assigned different numbers. For example the character A is assigned the decimal number 65, 

while a is assigned decimal 97.

*/
