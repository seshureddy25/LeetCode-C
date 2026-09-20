bool detectCapitalUse(char* word) {
    int upper = 0;
    int len = strlen(word);

    for (int i = 0; i < len; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z')
            upper++;
    }

    return upper == 0 ||
           upper == len ||
           (upper == 1 && word[0] >= 'A' && word[0] <= 'Z');
}