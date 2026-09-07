int distinctSubseqII(char* s)
{
    const int MOD = 1000000007;
    long dp[26] = {0};
    long total = 0;

    for(int i = 0; s[i] != '\0'; i++)
    {
        int index = s[i] - 'a';
        long newSubseq = (total + 1) % MOD;
        total = (total + newSubseq - dp[index] + MOD) % MOD;
        dp[index] = newSubseq;
    }

    return total;
}