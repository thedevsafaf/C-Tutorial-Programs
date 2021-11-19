#include <stdio.h>
int main()
{
    printf("Array Basics:\n");

    // array declaration
    float maths_mark[5];
    maths_mark[0]=10;
    maths_mark[1]=12;
    maths_mark[2]=13;
    maths_mark[3]=15;
    maths_mark[4]=14;
    printf("%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n",maths_mark[0],maths_mark[1],maths_mark[2],maths_mark[3],maths_mark[4]);
    printf("%.2f\t\n",maths_mark[2]+maths_mark[3]);
    
    // array initialization
    int balls[] = {1,2,3,4,5,6};
    printf("%d",balls[3]);
    
    int runs[5] = {72,43,36,63,23};
    for (int i=0;i<5;i++){
        printf("runs in %d matches = %d\n",i,runs[i]);
    }

    // array value change on a specific index
    maths_mark[2]=15;
    printf("%lf",maths_mark[2]);
    
}
