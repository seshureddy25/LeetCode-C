int maxPower(char* s) {
    int count=0;
    if(s[0]=='\0')
        return 0;
    int i=1,max=0;
    while(s[i]!='\0')
    {
        if(s[i]==s[i-1])
            count++;
        if(count>max)
            max=count;
        if(s[i]!=s[i-1])
            count=0;
        i++;
    }
    return max+1;
}