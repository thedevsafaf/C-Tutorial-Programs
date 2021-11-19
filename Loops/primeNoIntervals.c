#include <stdio.h>
int main(){
    int low,high,i,j,flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);
    printf("Prime numbers between %d and %d are: ", low, high);
    ///////////////////////////////////////////
    for(i=low+1;i<=high-1;i++){
        int j,flag=0;
        // ignore numbers less than 2
        if(low<=1){
            low++;
            continue;
        }
        for(j=2;j<=low/2;j++){
            // if low is a non prime no, flag ll be 1
            if(low%j==0){
                flag=1;
                break;
            }
        }    
        if (flag==0)
            printf("%d ",low);
        low++;
    }
    return 0;
}

// while loop
// #include <stdio.h>
// int main(){
//     int low,high,i,j,flag;
//     printf("Enter two numbers(intervals): ");
//     scanf("%d %d", &low, &high);
//     printf("Prime numbers between %d and %d are: ", low, high);
//     ///////////////////////////////////////////
//     // iteration until low is not equal to high
//     while(low<high){
//         flag=0;
        
//         // ignore numbers less than 2
//         if(low<=1){
//             low++;
//             continue;
//         }
        
//         for(i=2;i<=low/2;i++){
            
//             // if low is a non prime no, flag ll be 1
//             if(low%i==0){
//                 flag=1;
//                 break;                
//             }
//         }
//         if (flag==0)
//             printf("%d ",low);
//         low++;
//     }
//     return 0;
// }
