int premutation(char *s1, char *s2)
{
    int n = strlen(s1);
    int m = strlen(s2);
    if(n > m)
        return 0;
    int count1[26] = {0};
    int count2[26] = {0};
    for(int i = 0; i < n; i++)
    {
        count1[s1[i] - 'a']++;
        count2[s2[i] - 'a']++;
    }
    for(int i = 0; i <= m - n; i++)
    {
        if(memcmp(count1, count2, sizeof(count1)) == 0)
            return 1;
        if(i < m - n)
        {
            count2[s2[i] - 'a']--;
            count2[s2[i + n] - 'a']++;
        }
    }
    return 0;
}
bool checkInclusion(char* s1, char* s2)
{
    return premutation(s1, s2);
}
