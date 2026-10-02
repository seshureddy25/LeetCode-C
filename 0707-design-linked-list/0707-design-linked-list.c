typedef struct Node {
    int val;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct {
    Node *head;
    Node *tail;
    int size;
} MyLinkedList;

MyLinkedList* myLinkedListCreate() {
    MyLinkedList *list = malloc(sizeof(MyLinkedList));
    if (list == NULL)
        return NULL;

    list->head = NULL;
    list->tail = NULL;
    list->size = 0;

    return list;
}

int myLinkedListGet(MyLinkedList* obj, int index) {
    if (index < 0 || index >= obj->size)
        return -1;
    Node *temp;
    if (index < obj->size / 2) 
    {
        temp = obj->head;
        for (int i = 0; i < index; i++)
            temp = temp->next;
    }
    else 
    {
        temp = obj->tail;
        for (int i = obj->size - 1; i > index; i--)
            temp = temp->prev;
    }

    return temp->val;
}

void myLinkedListAddAtHead(MyLinkedList* obj, int val) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL)
        return;

    newNode->val = val;
    newNode->prev = NULL;
    newNode->next = obj->head;

    if (obj->head != NULL)
        obj->head->prev = newNode;
    else
        obj->tail = newNode;

    obj->head = newNode;
    obj->size++;
}

void myLinkedListAddAtTail(MyLinkedList* obj, int val) {
    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL)
        return;

    newNode->val = val;
    newNode->next = NULL;
    newNode->prev = obj->tail;

    if (obj->tail != NULL)
        obj->tail->next = newNode;
    else
        obj->head = newNode;

    obj->tail = newNode;
    obj->size++;
}

void myLinkedListAddAtIndex(MyLinkedList* obj, int index, int val) {
    if (index > obj->size)
        return;

    if (index <= 0) 
    {
        myLinkedListAddAtHead(obj, val);
        return;
    }

    if (index == obj->size) 
    {
        myLinkedListAddAtTail(obj, val);
        return;
    }
    Node *temp = obj->head;
    for (int i = 0; i < index; i++)
        temp = temp->next;

    Node *newNode = malloc(sizeof(Node));
    if (newNode == NULL)
        return;

    newNode->val = val;
    newNode->prev = temp->prev;
    newNode->next = temp;

    temp->prev->next = newNode;
    temp->prev = newNode;
    obj->size++;
}

void myLinkedListDeleteAtIndex(MyLinkedList* obj, int index) {
    if (index < 0 || index >= obj->size)
        return;

    Node *temp = obj->head;

    for (int i = 0; i < index; i++)
        temp = temp->next;

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        obj->head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    else
        obj->tail = temp->prev;

    free(temp);
    obj->size--;
}

void myLinkedListFree(MyLinkedList* obj) {
    if (obj == NULL)
        return;

    Node *temp = obj->head;

    while (temp != NULL) {
        Node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    free(obj);
}

/**
 * Your MyLinkedList struct will be instantiated and called as such:
 * MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/