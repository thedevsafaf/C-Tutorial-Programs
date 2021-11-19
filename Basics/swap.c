
#include <stdio.h>
int main(){
    // method 1
    int x=10;
    int y=20;
    int temp;
    printf("before swap : x = %d, y = %d\n",x,y);
    temp = x;
    x = y;
    y = temp;
    printf("after swap: x = %d, y = %d",x,y);
    
    /* method 2
    int x=33,y=20;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("%d ",x);
    printf("%d ",y);
    */
   
    return 0;
}