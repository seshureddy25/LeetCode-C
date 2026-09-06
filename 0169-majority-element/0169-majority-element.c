int compare(const void *a, const void *b)
{
    return (*(int *)a > *(int *)b);
}
int majorityElement(int* arr, int size) {
    qsort(arr,size,sizeof(int),compare);
    int max=0,count=0;
    int result=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]==arr[i-1])
        {
            count++;
        }
        else
        {
            count=0;
        }
        if(count>max)
        {
            max=count;
            result=arr[i];
        }
    }
    return result;
}