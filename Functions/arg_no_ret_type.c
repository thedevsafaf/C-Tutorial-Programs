//argument passed and no return type

#include <stdio.h>

void checkPrimeNo(int n);

int main(){
    checkPrimeNo(11);  //argument is not passed
    return 0;
}

void checkPrimeNo(int n){  //return type is int meaning doesnt return any value  
    int i,flag=0;       // (can take any var name or n also)
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is not a prime no.",n);
    else
        printf("%d is a prime no.",n);
}