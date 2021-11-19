#include <stdio.h>
int main(){
    char first_name[20],middle_name[20],last_name[20];
    printf("Enter the full name (first,middle,last): ");
    scanf("%s%s%s",first_name,middle_name,last_name);
    printf("Abbreviated Name is %c. %c. %s\n",first_name[0],middle_name[0],last_name);
    return(0);
}

/*

 * char is used to store a single character. 
 
 * think if we need to store a group or a sequence of characters.
 
 * for this we use String array...
 
 * an array is used to store many similar data types in single memory location.
 
 * an array is denoted by []. eg: char name[20]; int days[7]
 
 * the value inside the [] is the position of that value or called as index.
 
 * char name[10] : means that the name variable can holds 10 characters in it. (starts from 0 - 9)
 
 * name[0] : means that the first index of the name variable.
 
 * arr[5]  = {1,2,3,4,5} :::: array from 0 to 4
 
   arr[0] = 1
   
   arr[1] = 2
   
   arr[2] = 3
   
   arr[3] = 4
   
   arr[4] = 5
 



*/
