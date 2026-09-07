int compare(const void* a, const void *b)
{
    return *(int*)a-*(int*)b;
}
int missingNumber(int* arr, int size) {
    qsort(arr,size,sizeof(int),compare);
    if(arr[0]!=0)
        return 0;
    for(int i=1;i<size;i++)
    {
        if(arr[i]!=(arr[i-1]+1))
            return arr[i-1]+1; 
    }
    return size;
}