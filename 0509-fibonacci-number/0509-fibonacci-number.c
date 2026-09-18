int fibonacci(int x, int a, int b)
{
    if(x==0)
        return a;
    return fibonacci(x-1, b,b+a);
}
int fib(int n){
    int a=0;
    int b=1;
    return fibonacci(n,a,b);

}