
#include <stdio.h>
int main(){

long int n,sum,r;
printf("\nEnter a no:");
scanf("%ld",&n);

while(n>10){
    sum=0;
    while(n){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum>10)
        n=sum;
    else
        break;
}
        printf("\nSum of the digits in single digit is: %ld",sum);
        return 0;
}
