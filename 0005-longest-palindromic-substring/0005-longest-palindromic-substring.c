int fun(char *s, int l, int r)
{
    while(l < r)
    {
        if(s[l] != s[r])
            return false;

        l++;
        r--;
    }
    return true;
}

char* longestPalindrome(char* s)
{
    int len = strlen(s);
    char *result = malloc(1);
    result[0] = '\0';
    int maxLen = 0;
    for(int i = 0; i < len; i++)
    {
        for(int j = i; j < len; j++)
        {
            if(fun(s, i, j))
            {
                int currLen = j - i + 1;

                if(currLen > maxLen)
                {
                    free(result);
                    result = malloc(currLen + 1);
                    strncpy(result, s + i, currLen);
                    result[currLen] = '\0';
                    maxLen = currLen;
                }
            }
        }
    }
    return result;
}