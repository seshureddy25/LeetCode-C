char* multiply(char* num1, char* num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    if ((len1 == 1 && num1[0] == '0') || (len2 == 1 && num2[0] == '0')) 
    {
        char* res = (char*)malloc(2);
        res[0] = '0';
        res[1] = '\0';
        return res;
    }

    int* result = (int*)calloc(len1 + len2, sizeof(int));
    for (int i = len1 - 1; i >= 0; i--) 
    {
        for (int j = len2 - 1; j >= 0; j--) 
        {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    int i = 0;
    while (i < len1 + len2 && result[i] == 0) 
        i++;
    int size = len1 + len2 - i;
    char* res = (char*)malloc(size + 1);
    for (int k = 0; k < size; k++) 
        res[k] = result[i + k] + '0';
    res[size] = '\0';
    free(result);
    return res;
}