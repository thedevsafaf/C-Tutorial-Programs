#include <stdio.h>
int iterative_bs(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int recursive_bs(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            return recursive_bs(array, x, mid + 1, high);
        else
            return recursive_bs(array, x, low, mid - 1);
    }
}

int main(void)
{
    int choice, result;
    int array[] = {231, 232, 233, 235, 236, 246};
    int x = 246;
    int n = sizeof(array) - sizeof(array[0]);
    printf("please choose which method of Binary Search\n");
    printf("1- Iterative method\n");
    printf("2- Recursive method\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = iterative_bs(array, x, 0, n - 1);
        if (result == -1)
            printf("ELEMENT %d NOT FOUND!", x);
        else
            printf("ELEMENT %d is found at index %d", x, result);
        break;

    case 2:
        result = recursive_bs(array, x, 0, n - 1);
        if (result == -1)
            printf("ELEMENT %d NOT FOUND!", x);
        else
            printf("ELEMENT %d is found at index %d", x, result);
        break;
    default:
        printf("wrong choice\n");
    }
    return 0;
}
