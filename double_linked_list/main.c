#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int data;
	struct Node* next;
	struct Node* prev;
}Node;

Node* createNode(int data) {
// we use this function for create node 
// we need to temp->prev and temp->next Null because we dind't connect nodes yet!!
    Node* temp = (Node*)malloc(sizeof(Node));
    if(temp == NULL){
    	printf("Warning!!");
    	exit(1);
	}
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    return temp;
}

void AddtoHead(Node** head, int data) {
	//we don't need to use malloc function because we create createNode function 
	//if we don't use createNode function we can't create doubly linked list
    Node* temp = createNode(data);
    if (*head == NULL) {
        *head = temp;
    } else {
        temp->next = *head;
        (*head)->prev = temp;
        *head = temp;
    }
}

void AddtoTail(Node** head, int data) {
    Node* temp = createNode(data);
    //we need to check head is Null or there is any data in there
    //if we don't check and if head is NULL we will see Null and some data (eror)
    if (*head == NULL) {
        *head = temp;
    } else {
        Node* iter = *head;
        while (iter->next != NULL) {
            iter = iter->next;
        }
        iter->next = temp;
        temp->prev = iter;
    }
}

void deleteNode(Node** head, Node* del) {
    if (*head == NULL || del == NULL) {
        return; 
    }

    
    if (*head == del) {
        *head = del->next; 
    }

    
    if (del->next != NULL) {
        del->next->prev = del->prev;
    }

    if (del->prev != NULL) {
        del->prev->next = del->next;
    }

    free(del); 
}
void deleteByValue(Node** head, int data) {
    Node* temp = *head;
    while (temp != NULL) {
        if (temp->data == data) {
            deleteNode(head, temp);
            return; // First see firs data input this function delete and quit
        }
        temp = temp->next;//we connect after the node deleting node and before the node deleting node
    }
}
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int main() {
	Node *head =NULL;
	AddtoHead(&head,20);
	AddtoHead(&head,30);
	AddtoTail(&head,40);
	AddtoTail(&head,50);
	deleteByValue(&head,30);
	printList(head);
	
	
	return 0;
}
