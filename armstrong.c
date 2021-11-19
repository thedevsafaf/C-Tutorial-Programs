#include <stdio.h>
int main(){
    int n,num,rem,sum=0;
    printf("enter the no:");
    scanf("%d",&n);
    num=n;
    while(n!=0){
        rem = n % 10;
        sum = sum + (rem*rem*rem);
          n = n / 10; 
    }
    if ( num == sum ){
        printf("its an armstrong no.");
    }
    else{
        printf("not an armstrong no.");
    }
}

   /*    Check 153 is an Armstrong no = 153 -> (1*1*1) + (5*5*5) + (3*3*3) = 1 + 125 + 27 = 153 (its an armstrong no)  
    
    let n = 153
    
    Conditions    153 != 0 (True)         15 != 0 (True)       1 != 0 (True)         0 != 0 (False)
                  rem = 153 % 10 = 3      15 % 10 = 5          1 % 10 = 1            loop exit
                  sum = 0 + (3*3*3)= 27   27 + (5*5*5) = 152   152 + (1*1*1) = 153
                    n = 153 / 10 = 15     15 / 10 = 1          1/10 = 0
                 
    */
