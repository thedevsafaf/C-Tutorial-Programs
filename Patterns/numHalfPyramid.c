#include<stdio.h>
int main(){
    int i,j,row;
    printf("enter no of rows: ");
    scanf("%d",&row);
    printf("\nNumber Half Pyramid");
    printf("\n-------------------");
    printf("\n\n");
    for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
}