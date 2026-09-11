int totalNumbers(int* digits, int digitsSize)
{
    int count[10] = {0};
    for (int i = 0; i < digitsSize; i++)
        count[digits[i]]++;
    int ans = 0;
    for (int num = 100; num <= 998; num += 2)
    {
        int a = num / 100;
        int b = (num / 10) % 10;
        int c = num % 10;

        int need[10] = {0};

        need[a]++;
        need[b]++;
        need[c]++;

        int possible = 1;

        for (int i = 0; i < 10; i++)
        {
            if (need[i] > count[i])
            {
                possible = 0;
                break;
            }
        }
        if (possible)
            ans++;
    }
    return ans;
}