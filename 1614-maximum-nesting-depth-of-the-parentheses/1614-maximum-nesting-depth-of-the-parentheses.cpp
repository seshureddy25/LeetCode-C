class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int max=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                count++;
                if(count>max)
                   max=count;
            }
            else if(s[i]==')')
                count--;
        }
        return max;
    }
};