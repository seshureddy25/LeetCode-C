#include <stdlib.h>

void merge(int *nums, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    for(int i = 0; i < n1; i++)
        L[i] = nums[left + i];

    for(int i = 0; i < n2; i++)
        R[i] = nums[mid + 1 + i];

    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            nums[k++] = L[i++];
        else
            nums[k++] = R[j++];
    }

    while(i < n1)
        nums[k++] = L[i++];

    while(j < n2)
        nums[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int *nums, int left, int right)
{
    if(left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid + 1, right);

    merge(nums, left, mid, right);
}

int* sortArray(int* nums, int numsSize, int* returnSize)
{
    mergeSort(nums, 0, numsSize - 1);

    int *result = malloc(numsSize * sizeof(int));

    for(int i = 0; i < numsSize; i++)
        result[i] = nums[i];

    *returnSize = numsSize;

    return result;
}