#include <stdio.h>
int main(){
    /* da - dearness allowances (n % of basic)
       hra - house rent allowances (m % of basic)
       ta - travel allowances (q % of basic)
       basic salary - the fixed one
       gross salary - basic salary + pf + all allowances ... 
    */
    char emp_name[20];
    int basic_salary,gross_salary,da,hra,ta;
    printf("Enter employee name: ");
    scanf("%s",emp_name);
    printf("enter the basic salary: ");
    scanf("%d",&basic_salary);
    da = (basic_salary*12)/100;
    hra = (basic_salary*14)/100;
    ta = (basic_salary*10)/100;
    gross_salary = basic_salary+da+hra+ta;
    printf("\nemployee %s",emp_name);
    printf("\n------------");
    printf("\nbasic salary:%d",basic_salary);
    printf("\nda:%d",da);
    printf("\nta:%d",ta);
    printf("\nhra:%d",hra);
    printf("\ngross salary:%d",gross_salary);

    return 0;
}
