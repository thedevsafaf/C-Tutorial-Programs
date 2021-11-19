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
    printf("rev of %d is %d",num,rev);
}

   /*    123->321
    
    Conditions    123 != 0 (True)        12 != 0 (True)     1 != 0 (True)        0 != 0 (False)
                  rem = 123 % 10 = 3     12 % 10 = 2        1 % 10 = 1           loop exit
                  rev = 0 * 10 + 3 = 3   3 * 10 + 2 = 32    32 * 10 + 1 = 321
                    n = 123 / 10 = 12    12 / 10 = 1        1/10 = 0
                 
    */