#include <stdio.h>
#include <stdlib.h>
#define N 5
int arr[N],top;
void push(int data){
	if(top+1==N){
		printf("Stack is full");
	}else{
		top = top+1;
		arr[top]=data;
	}
}

void pop(){
	if(top==-1){
		printf("Stack is empty");
	}else{
		top=top-1;
	}
	
}
int peek(){
	return arr[top];
}
void printList(){
	int i;
	for(i=0;i<top+1;i++){
		printf("%d -", arr[i]);
	}
	printf("TOP==>");
}

int main() {
	top = -1;
	int select;
	while(1==1)
	{
	
	printf("\n1 Push");
	printf("\n2 Pop");
	printf("\n3 Peek");
	printf("\nEnter Selection");
	scanf("%d",&select);
	switch(select){
		case 1:
			printf("Enter a digit");
			scanf("%d",&select);
			push(select);
			printList();
			break;
			
		case 2:
			pop();
			printList();
			break;
			
		case 3:
			printf("Top value: %d", peek());
			break;	
	}   
}
	return 0;
}
