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