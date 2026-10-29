int smallestNumber(int n) {
    int result = 0;
    while (result < n) 
    {
        result = result * 2 + 1;
    }
    return result;
}