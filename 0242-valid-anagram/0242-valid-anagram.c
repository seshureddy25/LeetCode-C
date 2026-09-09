#include <stdbool.h>
#include <string.h>

bool isAnagram(char* s, char* t)
{
    if (strlen(s) != strlen(t))
        return false;

    int count[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }

    for (int i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
            return false;
    }

    return true;
}