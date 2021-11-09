#include <stdio.h>
int main(){
    char letter;
    printf("Enter the character: ");
    scanf("%c",&letter);
    printf("ASCII of the %c is %d.",letter,letter);
    return(0);
}