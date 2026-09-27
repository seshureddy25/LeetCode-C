char* reverseParentheses(char* s) {
    static char result[2001];
    char stack[1001][2001];
    int top = -1;
    int curLen = 0;
    int n = strlen(s);
    char cur[2001];
    cur[0] = '\0';
    for (int i = 0; i < n; i++) 
    {
        if (s[i] == '(') 
        {
            top++;
            strcpy(stack[top], cur);
            cur[0] = '\0';
            curLen = 0;
        }
        else if (s[i] == ')') 
        {
            int left = 0;
            int right = curLen - 1;
            while (left < right) 
            {
                char temp = cur[left];
                cur[left] = cur[right];
                cur[right] = temp;
                left++;
                right--;
            }
            char temp[2001];
            strcpy(temp, stack[top]);
            strcat(temp, cur);
            strcpy(cur, temp);
            curLen = strlen(cur);
            top--;
        }
        else 
        {
            cur[curLen++] = s[i];
            cur[curLen] = '\0';
        }
    }
    strcpy(result, cur);
    return result;
}