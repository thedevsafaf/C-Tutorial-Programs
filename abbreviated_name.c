#include <stdio.h>
int main(){
    char first_name[20],middle_name[20],last_name[20];
    printf("Enter the full name (first,middle,last): ");
    scanf("%s%s%s",first_name,middle_name,last_name);
    printf("Abbreviated Name is %c. %c. %s\n",first_name[0],middle_name[0],last_name);
    return(0);
}