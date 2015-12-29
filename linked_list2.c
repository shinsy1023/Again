#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int num;
	struct node *next;
}node;

node* hand;
node* nexthand;

void endadd(node* head, int num){
		
		hand=head;
		while(hand->next!=NULL){
			hand=hand->next;
		}
		node* newnode=(node*)malloc(sizeof(node));
		newnode->num=num;
		newnode->next=NULL;
		hand->next=newnode;
	}

void spcfadd(node* head, int nodenum, int num){
	hand=head;
	int i;
	for(i=1; i<nodenum; i++){
		hand=hand->next;
	}
	nexthand=hand->next;
	node* newnode=(node*)malloc(sizeof(node));
	newnode->num=num;
	hand->next=newnode;
	newnode->next=nexthand;
}

void allprint(node* head){
	hand=head->next;
	while(hand->next!=NULL){
		printf("%d ",hand->num);
		hand=hand->next;
	}
	printf("%d\n",hand->num);
}

void spcfprint(node* head, int nodenum){
	int i;
	hand=head;
	for(i=1;i<=nodenum;i++){
		hand=hand->next;
	}
	printf("%d, Current node number:%d\n",hand->num,nodenum);
}

int main(){
	node* head=(node*)malloc(sizeof(node));


	endadd(head, 5);
	endadd(head, 7);
	endadd(head, 1);
	endadd(head, 2);
	spcfadd(head, 2, 3);
	allprint(head); //5 3 7 1 2
	spcfprint(head, 4); //1, Current node number:4
	spcfadd(head, 1, 7);
	spcfprint(head, 2); //5, Current node number:2
	allprint(head);
	return 0;
}