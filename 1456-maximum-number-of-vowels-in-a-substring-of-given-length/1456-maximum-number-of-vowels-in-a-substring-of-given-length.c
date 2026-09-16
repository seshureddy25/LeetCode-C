int isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' ||c == 'o' || c == 'u';
}

int maxVowels(char* s, int k)
{
    int count = 0;
    int max = 0;
    for (int i = 0; i < k; i++)
    {
        if (isVowel(s[i]))
            count++;
    }
    max = count;
    for (int i = k; s[i] != '\0'; i++)
    {
        if (isVowel(s[i]))
            count++;
        if (isVowel(s[i - k]))
            count--;
        if (count > max)
            max = count;
    }
    return max;
}