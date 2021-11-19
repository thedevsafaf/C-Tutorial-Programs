#include<stdio.h>
int main(){
    int n,i;
    printf("enter no.of subjects:\n");
    scanf("%d",&n);
    int marks[n];
    for(i=0;i<n;i++){
        printf("marks %d entry: ",i+1);
        scanf("%d",&marks[i]);
    }
    printf("\nresults:\n");
    printf("-------\n");
    for(i=0;i<n;i++){
        printf("marks %d : %d\n",i+1,marks[i]);    
    }
}
