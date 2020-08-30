#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
};
void add_node(struct node *head,int data){
struct node *temp;
struct node *ptr;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=data;
temp->link=NULL;
ptr=head;
while(ptr->link!=NULL){
ptr=ptr->link;
}
ptr->link=temp;
printf("\n%d node added",temp->data);
}


void main(){
struct node *head;
struct node *current;
clrscr();
head=(struct node*)malloc(sizeof(struct node));
head->data=1;
head->link=NULL;

current=(struct node*)malloc(sizeof(struct node));
current->data=2;
current->link=NULL;
head->link=current;

current=(struct node*)malloc(sizeof(struct node));
current->data=3;
current->link=NULL;
head->link->link=current;

printf("node-%d node-%d node-%d",head->data,head->link->data,head->link->link->data);
add_node(head,4);
getch();
}