int largestAltitude(int* gain, int gainSize) {
    int max=0;
    int diff=0;
    for(int i=0;i<gainSize;i++)
    {
         diff= gain[i]+diff;
        if(diff>max)
            max=diff;
    }
    return max;
}