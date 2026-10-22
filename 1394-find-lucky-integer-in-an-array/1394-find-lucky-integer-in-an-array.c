int findLucky(int* arr, int arrSize) {
    int max=0;
    int freq[501]={0};
    for(int i=0;i<arrSize;i++)
        freq[arr[i]]++;
    for(int i=0;i<arrSize;i++)
        if(freq[arr[i]]==arr[i])
            if(arr[i]>max)
                max=arr[i];
    if(max)
        return max;
    return -1;
}