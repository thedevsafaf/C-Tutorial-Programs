#include <stdio.h> 
int main() {

   float base, height, area;
   
   printf("Enter the base:");
   scanf("%f",&base);
   printf("Enter the height:");
   scanf("%f",&height);
   area = (base*height)/2;
   printf("Triangle with base %.2f and height %.2f\n", base, height);
   printf("Area of the Triangle = %.2f\n", area);
    
   return(0);
}

