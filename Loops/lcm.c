#include <stdio.h>
int main(){
    int a,b,max,gcd;
    printf("Enter the two nos to find LCM: ");
    scanf("%d %d",&a,&b);
    max = (a > b) ? a : b; 
    while(1){ 
        if(max % a == 0 && max % b ==0){
            printf("LCM(%d,%d) = %d\n",a,b,max);
            // gcd = (a * b) / max; 
            // printf("gcd(%d,%d) = %d\n",a,b,gcd);
            break;
        }else{
            max++;
        }
    }
    return 0;
}
