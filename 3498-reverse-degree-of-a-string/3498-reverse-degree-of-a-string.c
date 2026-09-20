int reverseDegree(char* s) {
    int i=0;
    int sum=0;
    while(s[i]!='\0')
    {
        int get=26-(s[i]-'a');
        sum+=get*(i+1);
        i++;
    }
    return sum;
}