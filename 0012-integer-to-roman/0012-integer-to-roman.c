char* intToRoman(int num)
{
    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    char *result = malloc(20);
    int k = 0;
    for (int i = 0; i < 13; i++)
    {
        while (num >= values[i])
        {
            int j = 0;

            while (symbols[i][j] != '\0')
            {
                result[k++] = symbols[i][j++];
            }

            num -= values[i];
        }
    }
    result[k] = '\0';
    return result;
}