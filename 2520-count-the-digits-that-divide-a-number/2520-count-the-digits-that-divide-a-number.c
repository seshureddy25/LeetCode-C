int countDigits(int num) {
    int temp=num;
    int rem=0;
    int count=0;
    while(temp>0)
    {
        rem=temp%10;
        if(num%rem==0&& rem!=0)
            count++;
        temp/=10;
    }
    return count;
}