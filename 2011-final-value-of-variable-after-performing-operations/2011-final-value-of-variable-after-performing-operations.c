int finalValueAfterOperations(char** arr, int size) {
    int result=0;
    int i=0;
    while(i<size)
    {
        if(strcmp(arr[i],"++X")==0)
            ++result;
        else if(strcmp(arr[i],"--X")==0)
            --result;
        else if(strcmp(arr[i],"X++")==0)
            result++;
        else if(strcmp(arr[i],"X--")==0)
            result--;
            i++;
    }
    return result;
}