#include <stdio.h>
int main(){
    int n,i,flag=0;
    printf("enter no:");
    scanf("%d",&n);
    for(i=2; i<=n/2; i++){
        if(n%i==0){
            flag=1;
        }
    }
    if(n==1)
        printf("%d is a composite no.",n);
    else{
        if(flag==1)
            printf("%d is not a prime no.",n);
        else
            printf("%d is a prime no.",n);
    }
        
}