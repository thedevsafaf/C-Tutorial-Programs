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

