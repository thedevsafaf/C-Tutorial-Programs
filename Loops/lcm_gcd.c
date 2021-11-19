#include<stdio.h>
int main(){
    int a,b,i,gcd,lcm;
    printf("Enter the 2 nos to find LCM and GCD:");
    scanf("%d %d",&a,&b);
    for(i = 1; i <= a && i<= b; i++){
        //check i is a factor for both integers
        if(a % i == 0 && b % i == 0)
            gcd = i;   
    }
    lcm = (a*b)/gcd;
    printf("gcd(%d,%d) = %d\n",a,b,gcd);
    printf("lcm(%d,%d) = %d",a,b,lcm);

}
