#include <stdio.h>
int main()
{ 
  printf("int is    %d bytes \n", sizeof(short int));
  printf("long int is  %d bytes \n", sizeof(long int));
  printf("float is    %d bytes \n", sizeof(float));
  printf("double is   %d bytes \n", sizeof(double));
  printf("long double is  %d bytes \n", sizeof(long double));
  printf("char is   %d bytes \n", sizeof(char));
  return 0;

} 


/*

When sizeof() is used with the data types such as int, float, char… etc

it simply returns the amount of memory is allocated to that data types.

short int - 2 bytes

long int - 4 bytes

long double - 16 bytes

just check other variable sizes also

*/