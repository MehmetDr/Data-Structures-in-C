#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;


void addToHead(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void addToTail(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    struct Node* iter = head;
    while (iter->next != NULL) {
        iter = iter->next;
    }

    iter->next = temp;
}


int main() {
    addToHead(10);
    addToHead(20);
    addToTail(30);
    addToTail(40);
  

    return 0;
}

