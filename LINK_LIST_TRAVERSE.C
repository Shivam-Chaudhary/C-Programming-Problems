#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};

void count_nodes(struct node *head){
int count=0;
struct node *ptr;
ptr=head;

 if(head==NULL)
    printf("List empty");

 while(ptr!=NULL){
	count++;
	ptr=ptr->link;
}
printf("NO of nodes in the list=%d having values\n",count);
}

void main(){
struct node *head;
struct node *current;
clrscr();

head = (struct node *)malloc(sizeof(struct node));
head->data=10;
head->link=NULL;


current = (struct node *)malloc(sizeof(struct node));
current->data=20;
current->link=NULL;
head->link=current;

current=(struct node*)malloc(sizeof(struct node));
current->data=30;
current->link=NULL;
head->link->link=current;

count_nodes(head);
printf("%d %d %d",head->data,head->link->data,current->data);

getch();
}
