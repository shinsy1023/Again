#include <stdio.h>
#include <stdlib.h>

typedef struct _node{
	int num;
	struct _node* upper;
}node;

void push(node* bottom, int num){
	node* focus;
	focus=bottom;
	while(focus->upper!=NULL){
		focus=focus->upper;
	}
	node* newnode=(node*)malloc(sizeof(node));
	newnode->num=num;
	newnode->upper=NULL;
	focus->upper=newnode;
}

void pop(node* bottom){
	node* focus;
	focus=bottom;
	while(focus->upper->upper!=NULL){
		focus=focus->upper;
	}
	printf("pop: %d\n",focus->upper->num);
	focus->upper=NULL;
}

int main(){
	node* bottom=(node*)malloc(sizeof(node));
	bottom->upper=NULL;
	push(bottom,1);
	push(bottom,2);
	push(bottom,3);
	pop(bottom);
	push(bottom,4);
	pop(bottom);
	pop(bottom);
	pop(bottom);
	return 0;
}