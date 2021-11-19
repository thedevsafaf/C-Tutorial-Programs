#include<stdio.h>
int main(){
    int n,sum=0;
    do{
        printf("enter no:");
        scanf("%d",&n);
        sum=sum+n;
    }while(n!=0);
    printf("sum: %d",sum);
}

// here the user can input the nos to find the sum.
// the sum ll be calculated only when the user enters 0. 
// the numbers should be entered till the user enters 0 to find the sum.
