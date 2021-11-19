#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int a,b,c;
    double result;
    printf("enter thes no: ");
    scanf("%d",&n);
   
   //method:1: simple method without using pow()
    printf(" %d^1=%d\n %d^2=%d\n %d^3=%d\n ", n,n, n,n*n, n,n*n*n);

  //method:2: simple method with pow() and variables
    a=pow(n,1);
    b=pow(n,2);
    c=pow(n,3);
    printf("%d %d %d",a,b,c);

    //method-3: using loop concept with pow()
    /*
    for(int i=1;i<=3;i++){
        result = pow(n,i);
        printf("%d ^ %d = %.2lf\n",n,i,result);
    }
    */
    
}

/*
    pow() is a user defined function from <math.h>. 
    dont forget to include <math.h> library.
    let  n = 3
    so 3^1 = 3
       3^2 = 9
       3^3 = 27
       condition : pow(n,i)
       1<=3 (T)  : pow(3,1) = 3 : i++
       2<=3 (T)  : pow(3,2) = 9 : i++
       3<=3 (T)  : pow(3,3) = 27: i++
       4<=3 (F)  : exit from the loop



*/