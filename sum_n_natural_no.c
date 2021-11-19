#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the term for sum: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("%d\n",sum);
}

/*
    let n = 4
    
    start i from 1 to 4
    
    condition:   i=1 1<=4 (True)     i=2 2<=4 (True)    i=3 3<=4 (True)  i=4 4<=4 (True)   i=5 5<=4 (False)
    
    sum=sum+i    sum = 0 + 1 = 1     sum = 1 + 2 = 3    sum = 3 + 3 = 6  sum = 6 + 4 = 10  loop exit
                 
    
*/