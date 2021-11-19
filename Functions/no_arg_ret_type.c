//no argument passed and has a return value

#include <stdio.h>

int readInput();

int main(){
    int n,i,flag=0;
    n=readInput(); //no argument is passed.
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
    return 0;
}

int readInput(){  //return type is int means return int value
    int n;
    printf("enter no:");
    scanf("%d",&n);
    return n;
}