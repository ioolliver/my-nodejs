#include <stdio.h>
#include "linkedList.h"

void linkedListTest() {
    LinkedList* list1 = createLinkedList();

    if(list1->head->next != list1->head) {
        printf("Error: Asserts that the list is circular.\n");
    }

    insertValueInListStart(list1, 1);

    if(list1->head->next == list1->head) {
        printf("Error: Insertion failed using insertValueInListStart.\n");
    }

    if(list1->head->next->content != 1) {
        printf("Error: Wrong content when using insertValueInListStart.\n");
    }

    destroyLinkedList(list1);
    printf("All tests for Linked List run.\n");

}

int main() {
    linkedListTest();
    return 1;
}