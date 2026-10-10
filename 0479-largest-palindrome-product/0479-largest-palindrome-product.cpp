class Solution {
public:
    int largestPalindrome(int n) {
        if (n == 1)
            return 9;
        long long upper = 1;
        for (int i = 0; i < n; i++)
            upper *= 10;
        long long lower = upper / 10;
        upper--;
        for (long long left = upper; left >= lower; left--) 
        {
            long long palindrome = left;
            long long temp = left;
            while (temp > 0) 
            {
                palindrome = palindrome * 10 + temp % 10;
                temp /= 10;
            }
            for (long long i = upper; i * i >= palindrome; i--) 
            {
                if (palindrome % i == 0) {
                    long long other = palindrome / i;
                    if (other >= lower && other <= upper)
                        return palindrome % 1337;
                }
            }
        }

        return 0;
    }
};
