#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
}* Node;
Node createNode(int data) {
    Node temp = (Node)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
Node insertAtEnd(Node start, int data) {
    Node temp = createNode(data);
    if (start == NULL)
        return temp;
    Node cur = start;
    while (cur->next != NULL)
        cur = cur->next;
    cur->next = temp;
    return start;
}
Node mergeSortedLists(Node a, Node b) {
    struct Node temp;
    Node tail = &temp;
    temp.next = NULL;
    while (a != NULL && b != NULL) {
        if (a->data <= b->data) 
        {
            tail->next = a;
            a = a->next;
        } 
        else 
        {
            tail->next = b;
            b = b->next;
        }
        tail = tail->next;
    }
    if (a != NULL)
        tail->next = a;
    else
        tail->next = b;
    return temp.next;
}
void printList(Node head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    Node l1 = NULL;
    Node l2 = NULL;
    int n1, n2, value;
    printf("Enter number of elements in first sorted list: ");
    scanf("%d", &n1);
    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n1; i++) 
    {
        scanf("%d", &value);
        l1 = insertAtEnd(l1, value);
    }
    printf("Enter number of elements in second sorted list: ");
    scanf("%d", &n2);
    printf("Enter elements in sorted order:\n");
    for (int i = 0; i < n2; i++){
        scanf("%d", &value);
        l2 = insertAtEnd(l2, value);
    }
    Node mergedList = mergeSortedLists(l1, l2);
    printf("Merged Sorted List: ");
    printList(mergedList);
    return 0;
};