#include<stdio.h>
int main(){
    int n,i,t1=0,t2=1,nT;
    printf("Enter the no of terms:");
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(i=2;i<n;i++){
        nT=t1+t2;
        printf("%d ",nT);
        t1=t2;
        t2=nT;
    }
    return 0;
}