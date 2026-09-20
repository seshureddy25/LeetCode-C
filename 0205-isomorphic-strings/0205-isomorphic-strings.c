bool isIsomorphic(char* s, char* t) {
    int map1[256] = {0};
    int map2[256] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        unsigned char a = s[i];
        unsigned char b = t[i];
        if (map1[a] != 0 && map1[a] != b + 1)
            return false;

        if (map2[b] != 0 && map2[b] != a + 1)
            return false;
        map1[a] = b + 1;
        map2[b] = a + 1;
    }

    return true;
}