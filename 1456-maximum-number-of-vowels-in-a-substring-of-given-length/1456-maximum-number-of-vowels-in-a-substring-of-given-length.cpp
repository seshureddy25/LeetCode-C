class Solution {
public:
    int isvowel(char s)
    {
        return s=='a'||s=='e'||s=='i'||s=='o'||s=='u';
    }
    int maxVowels(string s, int k) {
        int max=0;
        int count=0;
        for(int i=0;i<k;i++)
            if(isvowel(s[i]))
                count++;
        max=count;
        for(int i=k;i<s.length();i++)
        {
            if(isvowel(s[i]))
                count++;
            if(isvowel(s[i-k]))
                count--;
            if(count>max)
                max=count;
        }
        return max;
    }
};