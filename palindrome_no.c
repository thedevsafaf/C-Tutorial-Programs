#include <stdio.h>
int main(){
    int n,num,rem,rev=0;
    printf("Enter the no:");
    scanf("%d",&n); 
    num = n;
    while(n!=0){                   
        rem = n % 10;              
        rev = rev * 10 + rem;      
          n = n / 10;              
    }
    if(num == rev)
        printf("%d is palindrome no",num);
    else{
        printf("%d is not a palindrome no",num);
    }
}