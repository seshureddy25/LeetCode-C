bool fun(char *s, int l, int r)
{
    while(l<r)
    {
        if(s[l]!=s[r])
            return false;
        l++;
        r--;
    }
    return true;
}
bool validPalindrome(char* s) {
    int len=strlen(s);
    int left =0;
    int right =len-1;
    while(left<right)
    {
        if(s[left]!=s[right])
            return fun(s,left+1,right)||fun(s,left,right-1);
        left++;
        right--;
    }
    return true;
}