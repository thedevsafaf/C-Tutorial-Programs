#include<stdio.h>

int checkPrimeNoIntervals(int n);

int main(){
    int low,high,i,flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low,high);
    
    for(i=low+1;i<=high-1;i++){
        // flag ll be 0 if i is a prime no
        flag = checkPrimeNoIntervals(i);
        if(flag == 0)
            printf("%d ", i);
    }
    return 0;
}

int checkPrimeNoIntervals(int n){
    int j,flag=0;
    for(j=2;j<=n/2;j++){
        if(n%j == 0){
            flag=1;
            break;
        }
    }
    return flag;
}