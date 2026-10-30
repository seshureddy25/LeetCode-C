int minNumberOperations(int* target, int targetSize) {
    int count=target[0];
    for(int i=1;i<targetSize;i++)
    {
        if(target[i]>target[i-1])
            count+=target[i]-target[i-1];
    }
    return count;
}