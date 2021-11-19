#include<stdio.h>
int main(){
    int n,i;
    int sum=0,avg;
    printf("price entry:\n");
    printf("enter the no of prices:");
    scanf("%d",&n);
    int price[n];
    for(i=1;i<=n;i++){
        printf("price%d : ",i);
        scanf("%d",&price[i]);
        sum = sum + price[i];
    }
    avg = sum/n;
    printf("sum: %d\n",sum);
    printf("average: %d\n",avg);
}