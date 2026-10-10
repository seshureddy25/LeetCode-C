class Solution {
public:
    string reverseWords(string s) {
        int left=0;
        int right=s.length()-1;
        while(left<right)
        {
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            right--;
            left++;
        }
        int i=0;
        int j=s.length();
        while(i<j)
        {
            if(s[i]==' ')
            {
                i++;
                continue;
            }
            left=i;
            while(i<j&&s[i]!=' ')
                i++;
            right=i-1;
            while(left<right)
            {
                char temp=s[left];
                s[left]=s[right];
                s[right]=temp;
                left++;
                right--;
            }
        }
         i=0;
        while(s[i]!='\0'&&s[i]==' ')
            i++;
        j=0;
        int space=0;
    while (i < s.length())
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
            space = 0;
        }
        else if (space == 0)
        {
            s[j++] = ' ';
            space = 1;
        }
        i++;
    }
    if (j > 0 && s[j - 1] == ' ')
        j--;
    s.resize(j);
    return s;
    }
};