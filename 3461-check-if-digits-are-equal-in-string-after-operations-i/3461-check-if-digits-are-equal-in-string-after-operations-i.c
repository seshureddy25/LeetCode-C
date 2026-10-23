
bool hasSameDigits(char* s)
{
    int len = strlen(s);
    while (len > 2)
    {
        int j = 0;
        for (int i = 1; i < len; i++)
        {
            s[j++] = ((s[i - 1] - '0') +(s[i] - '0')) % 10 + '0';
        }
        len = j;
        s[len] = '\0';
    }
    return s[0] == s[1];
}
