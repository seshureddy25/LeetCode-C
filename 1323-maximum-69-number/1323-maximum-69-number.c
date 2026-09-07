int maximum69Number (int num)
{
    char str[20];
    sprintf(str, "%d", num);
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '6')
        {
            str[i] = '9';
            break;
        }
    }
    return atoi(str);
}