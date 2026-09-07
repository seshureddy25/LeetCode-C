/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int compare(const void*a, const void *b)
 {
    return *(int*)a-*(int*)b;
 }
int* sortedSquares(int* arr, int size, int* returnSize) {
    int *result=malloc(size*sizeof(int));
    for( int i=0;i<size;i++)
    {
        result[i]=arr[i]*arr[i];
    }
    qsort(result, size,sizeof(int), compare);
    *returnSize=size;
    return result;

}