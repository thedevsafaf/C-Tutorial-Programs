#include<stdio.h>

void display(int age1, int age2){
    printf("%d",age1);
}

int main(){
    int ageArray[] = {2,8,10,12};

    // let me show the second and third array elements to display()
    display(ageArray[1],ageArray[2]);
    
    return 0;
}