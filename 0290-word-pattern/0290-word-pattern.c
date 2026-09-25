bool wordPattern(char* pattern, char* s) {
    char *map[26] = {0};
    char *used[26] = {0};
    int i = 0;
    char *word = strtok(s, " ");
    while (word != NULL && pattern[i] != '\0') 
    {
        int p = pattern[i] - 'a';
        if (map[p] != NULL) {
            if (strcmp(map[p], word) != 0)
                return false;
        } else 
        {
            for (int j = 0; j < 26; j++) 
            {
                if (used[j] != NULL && strcmp(used[j], word) == 0)
                    return false;
            }
            map[p] = word;
            used[p] = word;
        }
        i++;
        word = strtok(NULL, " ");
    }
    if (word != NULL || pattern[i] != '\0')
        return false;
    return true;
}