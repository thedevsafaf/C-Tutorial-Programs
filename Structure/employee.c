#include<stdio.h>
#include<string.h>
struct employee  
{   int id;  
    char name[20];  
    float salary;  
};  

int main(){
    struct employee e1,e2;

    e1.id = 101;
    strcpy(e1.name,"Safaf");
    e1.salary = 20000;

    e2.id = 102;
    strcpy(e2.name,"Abi");
    e2.salary = 23040;

    printf("\nEmployee Details");
    printf("\n------------------\n");
    printf("Employee 1\n");
    printf("----------\n");
    printf("%d\n",e1.id);
    printf("%s\n",e1.name);
    printf("%.2lf\n\n\n",e1.salary);
    printf("Employee 2\n");
    printf("----------\n");
    printf("%d\n",e2.id);
    printf("%s\n",e2.name);
    printf("%.2lf\n",e2.salary);
}