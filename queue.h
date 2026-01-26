#include "contentType.h"

#ifndef QUEUE

#include "linkedList.h"

typedef struct Queue {
    LinkedList* list;
    int size;
} Queue;

Queue* createQueue();
void push(Queue* Q, ContentType item);
ContentType pop(Queue* q);
int isEmpty(Queue* Q);

#define QUEUE 1
#endif