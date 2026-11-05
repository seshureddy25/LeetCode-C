bool backspaceCompare(char* s, char* t) {
    int j=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='#')
        {
            if(j==0)
                j=0;
            else
                j--;
        }
        else
        {
            s[j++]=s[i];
        }
    }
    s[j]='\0';
    j=0;
    for(int i=0;i<strlen(t);i++)
    {
        if(t[i]=='#')
        {
            if(j==0)
                j=0;
            else
                j--;
        }
        else
            t[j++]=t[i];
    }
    t[j]='\0';
    return strcmp(t,s)==0;
}