int myAtoi(char* s)
{
    int i = 0;
    long long rem = 0;
    int sign = 1;
    while (s[i] == ' ')
        i++;

    if (s[i] == '-' || s[i] == '+')
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }
    while (isdigit((unsigned char)s[i]))
    {
        rem = rem * 10 + (s[i] - '0');
        if (sign == 1 && rem > INT_MAX)
            return INT_MAX;
        if (sign == -1 && rem > 2147483648LL)
            return INT_MIN;
        i++;
    }
    return sign * rem;
}