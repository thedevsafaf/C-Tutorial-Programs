#include<stdio.h>
#include<math.h>
int main(){
    int low,high,n,num,rem,count=0;
    double result=0;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d",&low,&high);
    printf("\nPrime no between %d and %d are: ",low,high);

    // swap numbers if high is less than low
    if (high<low){
        high = high + low;
        low = high - low;
        high = high - low;
    }
    // iterate from (low+1) to (high-1)
    // in each iteration, check no is armstrong or not
    for(n=low+1; n<=high-1; n++){
        num = n;
        
        // counting no of digits
        while(num!=0){
            num/=10;
            count++;
        }
        
        num=n;
        
        // result contains sum of nth power of individual digits
        while(num!=0){
            rem = num%10;
            result = result + pow(rem,count);
            num/=10;
        }
        
        // check if number is equal to the sum of nth power of individual digits
        if((int)result == n)
            printf("%d ",n);
            
        count=0;
        result=0;
    }
    return 0;
}
