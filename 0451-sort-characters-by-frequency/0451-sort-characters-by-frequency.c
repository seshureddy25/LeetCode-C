typedef struct cmap { 
    char c;
    int f; 
} cm_t;
static int cmp(const void *s1, const void *s2)
{ 
    return ((const cm_t *)s2)->f - ((const  cm_t *)s1)->f; 
}
char* frequencySort(char* s) 
{
    cm_t m[62] = { { 0 } };
    for (int i = 0, j ; s[i] ; m[j].f++, m[j].c = s[i++])
        j = s[i] <= '9' ? s[i] - '0' : s[i] >= 'a' ? s[i] - 'a' + 10 : s[i] - 'A' + 36;
    qsort(m, 62, sizeof m[0], cmp);
    for (int i = 0, j = 0 ; i < 62 ; i++)
        while (m[i].f-- > 0 && (s[j++] = m[i].c));
    return s;
}