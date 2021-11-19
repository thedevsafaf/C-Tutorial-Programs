#include <stdio.h> 
int main() {
   int r;
   float area, perimeter;    
   float pi = 3.14;

   printf("Enter the radius:");
   scanf("%d",&r);
   perimeter = 2*pi*r;
   area = pi*r*r;
   printf("Perimeter of the Circle = %.2f\n", perimeter);
   printf("Area of the Circle = %.2f\n", area);
    
   return(0);
}


/*
   
    * scanf() is a system function used to take input from the user.  

    * datatypes : the type of data to store variables, functions ...
    
    * the variables used in this pgm with their own datatypes : perimeter,area,r,pi 
    
    * the functions used in this pgm: printf, scanf (system defined functions)
                                      (user defined functions) not used in this pgm.
    
    * datatypes in C used to store :  int ->  integer numbers                      
                                      float -> decimal numbers with point (single precision)
                                      double -> decimal numbers with point (double precision)
                                      char -> single characters

    * datatypes and their sizes : int = 4 bytes, 
                                  float = 4 bytes,
                                  double = 8 bytes, 
                                  char = 1 byte.
                                  
*/
