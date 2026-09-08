long long countCommas(int n)
{
    if (n < 1000)
        return 0;

    if (n < 100000)
        return n - 999;

    return n - 999;
}