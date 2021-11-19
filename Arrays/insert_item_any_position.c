#include <stdio.h>

int main()
{
    int n,i,score,pos;
    printf("\nenter no of elements:");
    scanf("%d",&n);
    int mark[n];
    printf("\nenter %d elements:\n",n);
    for(i=0;i<n;i++){
        printf("enter %d element: ",i+1);
        scanf("%d",&mark[i]);
    }
    printf("Array:::Marksheet\n");
    printf("-----------------\n");
    printf("index:\n");
    for(i=0;i<n;i++){
        printf("%d\t",i);
    }
    printf("\n");
    
    printf("values:\n");
    for(i=0;i<n;i++){
        printf("%d\t",mark[i]);
    }
    
    printf("\nPosition for the new mark:");
    scanf("%d",&pos);
    
    printf("\nEnter the new mark:");
    scanf("%d",&score);
    
    n++; 
    pos--;


    /*
        0   1   2   3       n=4
        23  32  25  65      

        ele:52 at 2nd position

        0   1   2   3   4       n=5
        23  54  32  25  65      pos=2

        n++   : 5
        pos-- : 1
        i     : n-1 = 5-1 = 4 
        i=4 to i>=1 ::: true
            mark[i] = mark[i-1]
            mark[4] = mark[3]
            mark[4] = 25 

            i-- , i->3
            3 to 3>=1 true
            mark[i]=mark[i-1]
            mark[3]=mark[3-1]
            mark[3] = 32...  
    */
    
    for (i = n - 1; i >= pos; i--)
      mark[i+1] = mark[i];
    
    mark[pos] = score;

    // i=n-1;
    // while(i>=pos){
    //     mark[i] = mark[i-1];
    //     i--;
    // }
    // mark[pos] = score;
    
    printf("\nUpdated Marksheet\n");
    printf("-----------------\n");
    printf("index:\n");
    for(i=0;i<n;i++){
        printf("%d\t",i);
    }
    printf("\n");
    
    printf("values:\n");
    for(i=0;i<n;i++){
        printf("%d\t",mark[i]);
    }
    return 0;
}


/* 

#include <stdio.h>

int main()
{
    int n,i,element,pos;
    printf("enter the no of elements needed in array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements for array: \n",n);
    for(i=0;i<n;i++){
        printf("array %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\narray elements:\n");
    printf("-----------------\n");
    for(i=0;i<n;i++){
        printf("%d\t",i);   
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nenter the element you wanna insert:");
    scanf("%d",&element);
    
    printf("\nenter the position you wanna insert %d:",element);
    scanf("%d",&pos);
    
    printf("\nn : %d",n);
    n++; //increment the array size by 1
    printf("\nn++ : %d",n);
    
    printf("\npos : %d",pos);
    pos--; //decrement the array element position by 1
    printf("\npos-- : %d",pos);
    
    i = n-1;
    printf("\ni = n-1 => %d - 1 =  %d",n,i);
    
    while(i>=pos){
        arr[i]=arr[i-1];
        printf("\narr[i] = arr[i-1]");
        printf("\narr[%d] = arr[%d]",i,i-1);
        printf("\narr[%d] = %d",arr[i],arr[i-1]);
        
        printf("\ni : %d",i);
        i--;
        printf("\ni-- : %d",i);
    }
    arr[pos] = element;
    printf("\narr[pos] = element => arr[%d] = %d",pos,element);
    printf("\nnew array elements after addition:\n");
    printf("------------------------------------\n");
    for(i=0;i<n;i++){
        printf("%d\t",i);   
    }
    printf("\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    
    return 0;
}


// Tracing


 
0   1   
10  20 

n = 2 pos = 3

after push

0   1   2   
10  20  30 

n++ pos--  i=n-1       
 3   2     i=3-1 = 2

condition : while (i >= pos)
	           2 >= 2 => True

            arr[i] = arr[i-1]
            arr[2] = arr[2-1]
            arr[2]  = arr[1]
            arr[2]  = 20             
                                       
            i=2, i--, i = 1

	    while(1 >= 2) => False

	    exit from the loop
                                  
            arr[pos] = element       
            arr[2] = 30

*/



