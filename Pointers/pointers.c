#include<stdio.h>

int main(){
    printf("pointers");
    int a=5;
    printf("\nvariable a : %d",a);
    printf("\naddress of a : %p",&a);

    return 0;
}

// Note: You will probably get a different address when you run the above code.

/*

Pointers (pointer variables) are special variables that are used to store addresses rather than values.
========

Pointer Syntax
==============

    int* p;      //  a pointer p of int type.

    also declare pointer in these ways
   
    int *p1;
    int * p2;

    another example of declaring pointers.
        int* p1, p2;
    Here, we have declared a pointer p1 and a normal variable p2

Assigning addresses to Pointers
===============================

   int* pc, c;
   c = 5;
   pc = &c;

   printf("%p",p);   |  0x7ffec3711bec

   Here, 5 is assigned to the c variable. And, the address of c is assigned to the pc pointer.

   -------------

   int *pc,c;
   c=5;
   pc = &c;

   printf("%d",*pc); | 5
    
   Here, the address of c is assigned to the pc pointer. 
   To get the value stored in that address, we used *pc.

   ---------------------
    
    int* pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d", c);    // Output: 1
    printf("%d", *pc);  // Ouptut: 1 

    ----------------------

    int* pc, c;
    c = 5;
    pc = &c;  
    *pc = 1;
    printf("%d", *pc);  // Ouptut: 1
    printf("%d", c);    // Output: 1

    ------------------------


    int* pc, c, d;
    c = 5;
    d = -15;

    pc = &c; printf("%d", *pc); // Output: 5
    pc = &d; printf("%d", *pc); // Ouptut: -15 

*/