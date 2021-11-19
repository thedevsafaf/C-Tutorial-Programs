#include<stdio.h>
#include<math.h>
int checkPrimeNo(int n);
int checkArmstrongNo(int n);

int main(){
    int n,flag;
    printf("Enter a positive integer: ");
    scanf("%d", &n);    

    // check prime no
    flag = checkPrimeNo(n);
    if(flag==1)
      printf("%d is a prime number.\n", n);
    else
      printf("%d is not a prime number.\n", n);
    
    // check armstrong no
    flag = checkArmstrongNo(n);
    if(flag==1)
        printf("%d is an Armstrong number.", n);
    else
      printf("%d is not an Armstrong number.", n);
    return 0;
}

// checkPrimeNo() : user defined function
int checkPrimeNo(int n){
    int i,flag=1,squareRoot;
    //sqrt() : built in function 
    squareRoot = sqrt(n);
    for(i=2;i<=squareRoot;i++){
        // condition for non prime no
        if(n%i==0){
            flag=0;
            break;
        }
    }
    return flag;
}

int checkArmstrongNo(int n){
    int count=0,num,rem,flag;
    double result=0;
    num = n;
    while(num!=0){
        // store the number of digits of num in n
        num/=10;
        count++;
    }
    num = n;
    while(num!=0){
        rem=num%10;
        result = result+pow(rem,count);
        num/=10;
    }
    // round() : built in function
    if(round(result)==n)
        flag=1;
    else
        flag=0;
    
    return flag;
}

