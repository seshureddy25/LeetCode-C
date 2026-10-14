char* maxSumOfSquares(int num, int sum) {
    if (num <= 0 || sum < 0 || sum > 9 * num)
        return "";
    char *str = malloc((num + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    str[num] = '\0';
    for (int i = 0; i < num; i++) 
    {
        if (sum >= 9) {
            str[i] = '9';
            sum -= 9;
        } 
        else 
        {
            str[i] = '0' + sum;
            sum = 0;
        }
    }
    return str;
}