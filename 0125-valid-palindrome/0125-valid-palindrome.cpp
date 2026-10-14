class Solution {
public:
    bool isPalindrome(string s) {
    int i = 0;
    int j = s.length()- 1;
    while (i < j) {
        while (i < j && !isalnum((unsigned char)s[i]))
            i++;
        while (i < j && !isalnum((unsigned char)s[j]))
            j--;
        if (tolower((unsigned char)s[i]) !=tolower((unsigned char)s[j]))
            return false;
        i++;
        j--;
    }
    return true;
    }
};