long long countCommas(long long n)
{
    long long result = 0;
    long long divisor = 1000;

    while (n >= divisor)
    {
        result += n - divisor + 1;

        divisor *= 1000;
    }

    return result;
}