#include<stdio.h>
int main(){
    int a=23,b=25;
    switch(a>b){
        case 0: 
            printf("%d is bigger than %d\n",b,a);
            break;
        case 1:
            printf("%d is bigger than %d\n",a,b);
            break; 
    }
}