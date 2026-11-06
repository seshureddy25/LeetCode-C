typedef struct node
{
    int size;
    int top;
    int *arr;
} stack;
void create(stack *s, int size)
{
    s->size = size;
    s->top = -1;
    s->arr = malloc(size * sizeof(int));
}
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize)
{
    int n = temperaturesSize;
    stack s;
    create(&s, n);
    int *result = calloc(n, sizeof(int));
    for(int i = n - 1; i >= 0; i--)
    {
        while(s.top != -1 &&temperatures[i] >= temperatures[s.arr[s.top]])
        {
            s.top--;
        }
        if(s.top != -1)
        {
            result[i] = s.arr[s.top] - i;
        }
        s.top++;
        s.arr[s.top] = i;
    }
    *returnSize = n;
    free(s.arr);
    return result;
}