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

void deleteNode(int data){
	if(head==NULL)return;
	//if we want to delete head data
	if(head->data==data){
		struct Node* temp = head;
		head=head->next;
		free(temp);
		return;
		
	}
	struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != data) {
        temp = temp->next;
    }

    if (temp->next != NULL) {
        struct Node* iter = temp->next;
        temp->next = temp->next->next;
        free(iter);
    }	
	
}

int main() {
    addToHead(10);
    addToHead(20);
    addToTail(30);
    addToTail(40);
    deleteNode(10);
    deleteNode(40);
    
  

    return 0;
}

