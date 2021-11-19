/*

In C programming, a string is a sequence of characters terminated with a null character \0.
 
  For example:

    char c[] = "c string";

When the compiler encounters a sequence of characters enclosed in the double quotation marks,
it appends a null character \0 at the end by default.


char s[5]; 

   s[0],s[1],s[2],s[3],s[4]

declaration in these ways
-------------------------

   char c[] = "abcd";

    char c[50] = "abcd";

    char c[] = {'a', 'b', 'c', 'd', '\0'};

    char c[5] = {'a', 'b', 'c', 'd', '\0'};

another example

    char c[5] = "abcde";

Here, we are trying to assign 6 characters (the last character is '\0') to a char array having 
5 characters. This is bad and you should never do this.

Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared. For example,

char c[100];
c = "C programming";  // Error! array type is not assignable.

-------------------------------------------------------------------------------------

 scanf() to read a string
 ------------------------

#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}

strlen() - calculates the length of a string
strcpy() - copies a string to another
strcmp() - compares two strings
strcat() - concatenates two strings

*/