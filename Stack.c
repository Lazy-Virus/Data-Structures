#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* link;
};

struct node* head;

int len(){
	int count=0;
	struct node* temp=head;
	while(temp!=NULL){
		count++;
		temp=temp->link;
	}
	return count;	
}
int isEmpty(){
	if(head==NULL){
		return 1;
	}
	return 0;
}

void print(){
	struct node* temp=head;
	printf("The stack is follows: \n");
	while(temp!=NULL){
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}

void push(int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->link=head;
	head=temp;
}

void pop(){
	struct node* temp=head;
	struct node* temp2=temp->link;
	head=temp2;
	free(temp);
}

int top(){
	struct node* temp=head;
	int data=temp->data;
	return data;
}
