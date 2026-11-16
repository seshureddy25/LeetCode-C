
class Solution {
public:
    double myPow(double x, int n) {
        long long num = n;
        long double base = x;
        if (num < 0) 
        {
            base = 1.0L / base;
            num = -num;
        }
        long double result = 1.0L;
        while (num > 0) 
        {
            if (num & 1) 
            {
                result *= base;
            }
            base *= base;
            num >>= 1;
        }
        return (double)result;
    }
};
