#include "stdlib.h"
#include "linkedList.h"

ListNode* createEmptyListNode() {
    ListNode* node = malloc(sizeof(ListNode));
    node->next = NULL;
    node->prev = NULL;
    return node;
}

ListNode* createListNode(ContentType initialValue) {
    ListNode* node = createEmptyListNode();
    node->content = initialValue;
    return node;
}

LinkedList* createLinkedList() {
    LinkedList* list = malloc(sizeof(LinkedList));
    ListNode* head = createEmptyListNode();
    list->head = head;
    list->head->prev = head;
    list->head->next = head;
    return list;
}

void destroyLinkedList(LinkedList* list) {
    ListNode* next = list->head->next;
    while(next != list->head) {
        ListNode* temp = next->next;
        free(next);
        next = temp;
    }
    free(list);
}

void insertValueInListStart(LinkedList* list, ContentType value) {
    ListNode* newNode = createListNode(value);
    newNode->prev = list->head;
    newNode->next = list->head->next;
    list->head->next->prev = newNode;
    list->head->next = newNode;
}

void insertValueInListEnd(LinkedList* list, ContentType value) {
    ListNode* newNode = createListNode(value);
    newNode->next = list->head;
    newNode->prev = list->head->prev;
    list->head->prev->next = newNode;
    list->head->prev = newNode;
}

void removeNode(ListNode* node) {
    if(node->prev != NULL) {
        node->prev->next = node->next;
    }
    if(node->next != NULL) {
        node->next->prev = node->prev;
    }
    free(node);
}