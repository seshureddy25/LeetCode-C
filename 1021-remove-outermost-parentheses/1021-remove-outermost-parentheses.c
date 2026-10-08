char* removeOuterParentheses(char* s)
{
    char *result = malloc(strlen(s) + 1);
    int depth = 0;
    int i = 0;
    int j = 0;
    while(s[i] != '\0')
    {
        if(s[i] == '(')
        {
            depth++;
            if(depth > 1)
                result[j++] = s[i];
        }
        else
        {
            if(depth > 1)
                result[j++] = s[i];
            depth--;
        }
        i++;
    }
    result[j] = '\0';
    return result;
}