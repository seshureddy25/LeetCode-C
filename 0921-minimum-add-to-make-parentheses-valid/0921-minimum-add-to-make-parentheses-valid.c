int minAddToMakeValid(char* s) {
    int open = 0;
    int add = 0;

    int i = 0;

    while (s[i] != '\0') 
    {
        if (s[i] == '(') 
        {
            open++;
        }
        else if (s[i] == ')') 
        {
            if (open > 0)
                open--;
            else
                add++;
        }
        i++;
    }
    return add + open;
}