/*

In C programming, a struct (or structure) is a collection of variables 
(can be of different types) under a single name.

syntax
------

struct Person {
  char name[50];
  int citNo;
  float salary;
};

creating structure variables
----------------------------

struct Person {
  // code
};

int main() {
  struct Person person1, person2, p[20];
  return 0;
}

another way to create structure variables
-----------------------------------------

struct Person {
   // code
} person1, person2, p[20];

In both cases,

person1 and person2 are struct Person variables
p[] is a struct Person array of size 20.

Access Members of a Structure
There are two types of operators used for accessing members of a structure.

.  =  Member operator
-> = Structure pointer operator

you want to access the salary of person2. Here's how you can do it.

person2.salary

*/