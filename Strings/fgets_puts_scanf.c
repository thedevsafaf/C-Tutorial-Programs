#include <stdio.h>
int main()
{  
    // scanf
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);

    // fgets
    char name1[30];
    printf("Enter name: ");
    fgets(name1, sizeof(name1), stdin);  // read string
    printf("Name: ");
    // puts
    puts(name1);    // display string
    
    return 0;
}
