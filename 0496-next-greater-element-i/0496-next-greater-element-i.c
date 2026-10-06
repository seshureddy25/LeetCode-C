#include <stdlib.h>

int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size,int* returnSize) {
    int *result = malloc(nums1Size * sizeof(int));
    int *stack = malloc(nums2Size * sizeof(int));
    int top = -1;
    int *next = malloc(nums2Size * sizeof(int));
    for (int i = nums2Size - 1; i >= 0; i--) {
        while (top >= 0 && stack[top] <= nums2[i])
            top--;
        if (top >= 0)
            next[i] = stack[top];
        else
            next[i] = -1;
        stack[++top] = nums2[i];
    }
    for (int i = 0; i < nums1Size; i++) 
    {
        result[i] = -1;
        for (int j = 0; j < nums2Size; j++) 
        {
            if (nums1[i] == nums2[j]) 
            {
                result[i] = next[j];
                break;
            }
        }
    }

    free(stack);
    free(next);
    *returnSize = nums1Size;
    return result;
}