class Solution {
public:
    string digitSum(string s, int k) {
        while (s.length() > k) {
            string result = "";
            for (int i = 0; i < s.length(); i += k) {
                int sum = 0;
                for (int j = i; j < i + k && j < s.length(); j++) {
                    sum += s[j] - '0';
                }
                result += to_string(sum);
            }
            s = result;
        }
        return s;
    }
};
