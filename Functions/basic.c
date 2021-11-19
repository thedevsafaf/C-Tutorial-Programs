#include<stdio.h>

int addNum(int a, int b);           //function prototype

int main(){
    int n1,n2,sum;
    printf("Enter two no: ");
    scanf("%d %d",&n1,&n2);
    sum = addNum(n1,n2);              //function call
    printf("sum : %d",sum);
    return 0;
}

int addNum(int a,int b){            //function definition
    int result = a+b;
    return result;                  //return statement
}