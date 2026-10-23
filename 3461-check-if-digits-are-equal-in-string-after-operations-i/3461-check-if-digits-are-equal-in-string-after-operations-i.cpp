class Solution {
public:
    bool hasSameDigits(string s) {
        int l=s.length();
        while(l>2)
        {
            int j=0;
            int i=1;
            while(i<l)
            {
                s[j++]=((s[i-1]-'0')+(s[i]-'0'))%10+'0';
                i++;
            }
            l=j;
        }
        return s[0]==s[1];
    }
};