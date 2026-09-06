char **fizzBuzz(int n, int *returnSize)
{
    int i = 1;
    char **result = malloc(n * sizeof(char *));
    while (i <= n)
    {
        result[i - 1] = malloc(12 * sizeof(char));
        if (i % 3 == 0 && i % 5 == 0)
            strcpy(result[i - 1], "FizzBuzz");
        else if (i % 3 == 0)
            strcpy(result[i - 1], "Fizz");
        else if (i % 5 == 0)
            strcpy(result[i - 1], "Buzz");
        else
            sprintf(result[i - 1], "%d", i);

        i++;
    }

    *returnSize = n;
    return result;
}