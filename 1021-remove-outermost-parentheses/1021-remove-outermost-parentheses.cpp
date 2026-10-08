class Solution {
public:
    string removeOuterParentheses(string s) {
        string k;
        int depth = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '(')
            {
                depth++;
                if(depth > 1)
                    k.push_back(s[i]);
            }
            else
            {
                if(depth > 1)
                    k.push_back(s[i]);
                depth--;
            }
        }
        return k;
    }
};