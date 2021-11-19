//argument passed and return type

#include <stdio.h>

int checkPrimeNo(int n);

int main(){
    int flag;
    flag = checkPrimeNo(9);  //argument is not passed
    if(flag==1)
        printf("not a prime no.");
    else
        printf("it is a prime no.");
    return 0;
}

int checkPrimeNo(int n){  //return type is int & has argument
    int i;  
    for(i=2; i<=n/2; i++){
        if(n%i==0)
            return 1;    
    }
    return 0;
}