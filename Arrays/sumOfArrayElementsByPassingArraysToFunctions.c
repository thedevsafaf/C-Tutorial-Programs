#include <stdio.h>

float calcSum(float num[]){
    float sum=0.0;
    for(int i=0; i<6; i++){
        sum=sum+num[i];
    }
    return sum;
}


int main(){
    float result;
    float num[] = {23.4,55,22.6,3,40.5,18};

    //num array is passed to sum()
    printf("Sum : %.2f",calcSum(num));
    return 0; 
}