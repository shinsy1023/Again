#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int num;
	struct _node* next;
}node;

void add(node* head, int num){
	node* focus;
	focus=head;
	while(focus->next!=NULL){
		focus=focus->next;
	}
	node* newnode=(node*)malloc(sizeof(node));
	newnode->num=num;
	focus->next=newnode;
}
void print(node* head){
	node* focus;
	focus=head;
	printf("%d-out\n",focus->next->num);
	head->next=head->next->next;
}

int main(){
	node* head=(node*)malloc(sizeof(node));
	head->next=NULL;
	int a;
	while(1){
		scanf("%d",&a);
		if(a==1){
			scanf("%d",&a);
			add(head, a);
		}
		else{
			print(head);
		}
	}
return 0;
}