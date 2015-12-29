#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int num;
	struct node *next;
}node;

node* hand;

void add(node* head, int num){

		hand=head;
		while(hand->next!=NULL){
			hand=hand->next;
		}
		node* newnode=(node*)malloc(sizeof(node));
		newnode->num=num;
		newnode->next=NULL;
		hand->next=newnode;
	}

void print(node* head){
	hand=head->next;
	while(hand->next!=NULL){
		printf("%d ",hand->num);
		hand=hand->next;
	}
	printf("%d",hand->num);
}

int main(){
	node* head=(node*)malloc(sizeof(node));


	add(head, 5);
	add(head, 7);
	add(head, 1);
	add(head, 2);
	print(head); //5 7 1 2
	return 0;
}