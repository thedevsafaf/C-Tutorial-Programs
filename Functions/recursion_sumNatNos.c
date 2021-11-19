#include <stdio.h>

int sum(int n);

int main(){
    int n,result;
    printf("enter the No: ");
    scanf("%d",&n);
    result = sum(n);
    printf("sum : %d",result);
    return 0;
}

int sum(int n){
    if(n!=0)
         // sum function call again in this function: recursive function
        return n+sum(n-1);
    else
        return n;
}


/*
    n=3
    sum(3) 
    3!0 condition True
    return n+sum(n-1)
           3+sum(3-1)
           3+sum(2)

           3+2+sum(2-1)
           3+2+sum(1)
           
           3+2+1
           6

*/