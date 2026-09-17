char* toLowerCase(char* s) {
    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]>64&&s[i]<91)
        {
            s[i]=s[i]+32;
        }
        i++;
    }
    return s;
}