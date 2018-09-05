#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	struct Node *next;
};

struct Linked_List{
	int size;
	struct Node *head;
	struct Node *tail;
};

void insert(struct Linked_List *list, int value){
	struct Node* node = (struct Node*)malloc(sizeof(struct Node*));
	node->value = value;
	node->next = NULL;
	if(list->head = NULL){
		list->head = node;
		list->tail = node;
		list->size = 1;	
	}else{
		list->tail->next = node;
		list->tail = node;
		list->size++;
	}
};

void print_list(struct Linked_List *list){
	struct Node* node = list->head;	
	while(node != NULL){
		printf("%d ", node->value);
		node = node->next;
	}
};

int main(){	
	struct Linked_List* list = (struct Linked_List*)malloc(sizeof(struct Linked_List*));
	list->head = NULL;
	insert(list, 1);
	insert(list, 2);
	insert(list, 3);
	print_list(list);
	return 0;
}
