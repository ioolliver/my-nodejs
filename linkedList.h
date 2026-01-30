#include "contentType.h"

#ifndef LINKEDLIST

/* Double-linked list node */
typedef struct ListNode {
    ContentType content;
    struct ListNode* next;
    struct ListNode* prev;
} ListNode;

/* Circular linked list */
typedef struct LinkedList {
    ListNode* head;
} LinkedList;

LinkedList* createLinkedList();
ListNode* createListNode(ContentType initialValue);
void insertValueInListStart(LinkedList* list, ContentType value);
void insertValueInListEnd(LinkedList* list, ContentType value);
void removeNode(ListNode* node);
void destroyLinkedList(LinkedList* list);

#define LINKEDLIST 1
#endif