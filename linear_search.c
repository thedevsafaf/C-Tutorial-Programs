#include <stdio.h>

int linear_search(int array[], int x, int n)
{
    for (int i = 0; i < n; i++)
        if (array[i] == x)
        {
            return i;
        }
    return -1;
}

int main()
{
    int array[] = {1, 42, 45, 23, 22, 54};
    int x = 54;
    int n = sizeof(array) / sizeof(array[0]);
    int result = linear_search(array, x, n);
    if (result == -1)
        printf("%d Not found", x);
    else
        printf("Element %d is found at %d\n", x, result);
}