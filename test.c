#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int num;
	struct node *next;
}node;

node* hand;

void add(node* head, int num){
	if(head==NULL){
		head=(node*)malloc(sizeof(node));
		head->num=num;
		head->next=NULL;
		}
}
void print(node* head){
	
	printf("%d",head->num);
}

int main(){
	node* head=NULL;

	add(head, 5);
	print(head);
	return 0;
}