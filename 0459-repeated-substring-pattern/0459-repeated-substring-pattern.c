bool repeatedSubstringPattern(char* s) {
    int n = strlen(s);
    for (int len = 1; len <= n / 2; len++) 
    {
        if (n % len != 0)
            continue;
        bool valid = true;
        for (int i = len; i < n; i++) 
        {
            if (s[i] != s[i % len]) {
                valid = false;
                break;
            }
        }
        if (valid)
            return true;
    }
    return false;
}