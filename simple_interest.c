#include <stdio.h>
int main(){
    float p,r,t,simple_interest,amount;

    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the rate of interest in %%: ");
    scanf("%f",&r);
    printf("Enter the time in years: ");
    scanf("%f",&t);

    simple_interest = p*(r/100)*t;
    amount = p+simple_interest;
    
    printf("\nprincipal amount: %.2lf",p); 
    printf("\nrate of interest: %.2lf %%",r); 
    printf("\ntime in years: %.2lf",t); 
    printf("\nsimple_interest: %.2lf",simple_interest); 
    printf("\ntoal amount: %.2lf",amount); 

    return 0;

}