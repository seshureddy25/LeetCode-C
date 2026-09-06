#include <stdlib.h>
#include <stdbool.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

bool containsDuplicate(int* arr, int size)
{
    qsort(arr, size, sizeof(int), compare);
    for(int i = 1; i < size; i++)
    {
        if(arr[i] == arr[i - 1])
            return true;
    }
    return false;
}