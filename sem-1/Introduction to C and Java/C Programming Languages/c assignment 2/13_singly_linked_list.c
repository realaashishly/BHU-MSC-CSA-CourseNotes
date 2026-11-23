#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insertBegin(int value) {
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}
void insertEnd(int value) {
    struct Node *newNode, *temp;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (head == NULL) { head = newNode; return; }
    temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}
void deleteNode(int value) {
    struct Node *temp = head, *prev = NULL;
    if (temp != NULL && temp->data == value) {
        head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}
void display() {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    insertBegin(5);
    printf("List after insertions: \n");
    display();
    deleteNode(20);
    printf("List after deleting 20: \n");
    display();
    return 0;
}
