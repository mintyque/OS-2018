#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	struct Node *next;
};

struct Linked_List{
	int size;
	struct Node *head;
}

void print_list(struct Node *node){
	while(node != NULL){
		printf("%d ", node->value);
		node = node->next;
	}
}

int main(){
	int size;	
	printf("Size of your linked list? ");
	scanf("%d", size);
	
	struct Node* head = NULL;
	struct Node* middle = NULL;
	struct Node* tail = NULL;
	head = (struct Node*)malloc(sizeof(struct Node*));
	middle = (struct Node*)malloc(sizeof(struct Node*));
	tail = (struct Node*)malloc(sizeof(struct Node*));
	head->value = 1;
	head->next = middle;
	middle->value = 2;
	middle->next = tail;
	tail->value = 3;
	tail->next = NULL;
	print_list(head);
	return 0;
}
