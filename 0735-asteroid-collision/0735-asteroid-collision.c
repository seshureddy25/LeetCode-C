typedef struct
{
    int top;
    int *arr;
} stack;

void create(stack *s, int size)
{
    s->top = -1;
    s->arr = malloc(sizeof(int) * size);
}

int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize)
{
    stack s;
    create(&s, asteroidsSize);
    for(int i = 0; i < asteroidsSize; i++)
    {
        int current = asteroids[i];
        int destroyed = 0;
        while(s.top != -1 && s.arr[s.top] > 0 &&current < 0)
        {
            if(s.arr[s.top] < -current)
            {
                s.top--;
            }
            else if(s.arr[s.top] == -current)
            {
                s.top--;
                destroyed = 1;
                break;
            }
            else
            {
                destroyed = 1;
                break;
            }
        }
        if(destroyed == 0)
        {
            s.arr[++s.top] = current;
        }
    }
    *returnSize = s.top + 1;
    if(*returnSize == 0)
    {
        free(s.arr);
        return NULL;
    }
    int *result = malloc(sizeof(int) * (*returnSize));
    for(int i = 0; i < *returnSize; i++)
    {
        result[i] = s.arr[i];
    }
    free(s.arr);
    return result;
}
