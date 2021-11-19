//no argument passed and no return value

#include <stdio.h>

void checkPrimeNo();

int main(){
    checkPrimeNo();  //argument is not passed
    return 0;
}

void checkPrimeNo(){  //return type is void meaning doesnt return any value
    int n,i,flag=0;
    printf("enter no:");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==1)
        printf("%d is not a prime no.",n);
    else
        printf("%d is a prime no.",n);
}