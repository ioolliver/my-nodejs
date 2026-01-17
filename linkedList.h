typedef int ContentType;

typedef struct ListNode {
    ContentType content;
    struct ListNode* next;
} ListNode;

ListNode* createListNode(ContentType initialValue);
ListNode* createLinkedList();
void insertValueInList(ListNode* head, ContentType value);
void destroyLinkedList(ListNode* head);