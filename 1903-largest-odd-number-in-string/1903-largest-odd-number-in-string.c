char* largestOddNumber(char* num) 
{
    int len = strlen(num);
    for(int i = len - 1; i >= 0; i--)
    {
        int n = num[i] - '0';
        if(n % 2 != 0)
        {
            num[i + 1] = '\0';
            return num;
        }
    }
    return "";
}
