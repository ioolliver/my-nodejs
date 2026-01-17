#include "stdlib.h"
#include "linkedList.h"

ListNode* createListNode(ContentType initialValue) {
    ListNode* node = malloc(sizeof(ListNode));
    node->next = NULL;
    node->content = initialValue;
    return node;
}

ListNode* createLinkedList() {
    ListNode* head = createListNode(NULL);
    return head;
}

void destroyLinkedList(ListNode* head) {
    ListNode* next = head;
    while(next != NULL) {
        ListNode* temp = next->next;
        free(next);
        next = temp;
    }
}

void insertValueInList(ListNode* head, ContentType value) {
    ListNode* newNode = createListNode(value);
    newNode->next = head->next;
    head->next = newNode;
}