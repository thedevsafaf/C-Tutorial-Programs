#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<0)
        printf("fact doesn't exist for negative nos!");
    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }  
        printf("%d ! = %d",n,fact);  
    }
    return 0;
}

/*  
    Tracing
    -------
        fact = 1
        let n = 3
        check the condition whether n is greater than 0, then do loop,
        otherwise print some error.
            loop i from 1 to 3: 
                condition (1<=3) -> True
                    fact = fact*i
                    fact = 1*1  = 1
                    i++ 
                condition (2<=3) -> True
                    fact = fact*i
                    fact = 1*2 = 2
                    i++ 
                condition (3<=3) -> True
                    fact = fact*i
                    fact = 2*3 = 6
                    i++
                condition (4<=3) -> False
        exit from the loop

*/
