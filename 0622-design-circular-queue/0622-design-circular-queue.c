


typedef struct node{
    int data;
    struct node *link;
}Node;

typedef struct
{
    Node *front;
    Node *rear;
    int size;
    int capacity;
} MyCircularQueue;
MyCircularQueue* myCircularQueueCreate(int k)
{
    MyCircularQueue *queue = malloc(sizeof(MyCircularQueue));

    queue->front = NULL;
    queue->rear = NULL;
    queue->size = 0;
    queue->capacity = k;

    return queue;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value)
{
    if(obj->size == obj->capacity)
        return false;

    Node *newnode = malloc(sizeof(Node));

    newnode->data = value;

    if(obj->front == NULL)
    {
        obj->front = newnode;
        obj->rear = newnode;
        newnode->link = newnode;
    }
    else
    {
        newnode->link = obj->front;
        obj->rear->link = newnode;
        obj->rear = newnode;
    }

    obj->size++;

    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj)
{
    if(obj->front == NULL)
        return false;

    Node *temp = obj->front;

    if(obj->front == obj->rear)
    {
        obj->front = NULL;
        obj->rear = NULL;
    }
    else
    {
        obj->front = obj->front->link;
        obj->rear->link = obj->front;
    }

    free(temp);
    obj->size--;

    return true;
}
int myCircularQueueFront(MyCircularQueue* obj) {
    if(obj->front==NULL)
        return -1;
    return obj->front->data;
}

int myCircularQueueRear(MyCircularQueue* obj) {
    MyCircularQueue * temp=obj;
    if(obj->rear==NULL)
        return -1;
    return obj->rear->data;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {
    return obj->size==0;
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    return obj->size==obj->capacity;
}

void myCircularQueueFree(MyCircularQueue* obj)
{
    while(obj->front != NULL)
    {
        Node *temp = obj->front;

        if(obj->front == obj->rear)
        {
            obj->front = NULL;
            obj->rear = NULL;
        }
        else
        {
            obj->front = obj->front->link;
        }

        free(temp);
    }

    free(obj);
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/