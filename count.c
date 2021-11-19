#include <stdio.h>
int main(){
    int n,count=0;
    printf("Enter the no:");
    scanf("%d",&n); 
    while(n!=0){                   
          n = n / 10;
          count++;
    }
    printf("count: %d",count);
    return 0;
}

// 1234

// 1234/10 = 123 count=1
// 123/10  = 12  count=2
// 12/10   = 1   count=3
// 1/10    = 0   count=4