#include <stdio.h>
int main(){
    /*
        for eg: if we take Celcius in 100
        and we need to convert 100 C to __ F

        by the formula, 
            f = (c * 9 / 5) + 32
            f = (100 * 9 / 5) + 32 (rule of operator precedence * / %)
            f = (900 / 5) + 32 
            f = (180) + 32
            f = 212
    */

    float c,f;
    printf("Enter the degree in Celsius: ");
    scanf("%f",&c);
    f = (c * 9 / 5) + 32;
    printf("%.2lf C ----> %.2lf F",c,f);
    return 0;
}
