#include "queue.h"
#include <stdlib.h>

Queue* createQueue() {
    Queue* q = malloc(sizeof(Queue));
    q->list = createLinkedList();
    q->size = 0;
    return q;
}

void push(Queue* Q, ContentType item) {
    insertValueInListEnd(Q->list, item);
    Q->size = Q->size + 1;
}

ContentType pop(Queue* Q) {
    if(Q->size == 0) return NULL;
    ListNode* firstNode = Q->list->head->next;
    ContentType content = firstNode->content;
    removeNode(firstNode);
    return content;
}

int isEmpty(Queue* Q) {
    if(Q->size == 0) return 1;
    return 0;
}