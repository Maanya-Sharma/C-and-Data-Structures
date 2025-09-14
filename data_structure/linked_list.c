#include <stdio.h>
#include <stdlib.h>
struct Node{ int data; struct Node* next; };
void insert(struct Node** head,int val){ struct Node* newNode=(struct Node*)malloc(sizeof(struct Node)); newNode->data=val; newNode->next=NULL; if(*head==NULL){ *head=newNode; return;} struct Node* temp=*head; while(temp->next!=NULL) temp=temp->next; temp->next=newNode;}
void display(struct Node* head){ if(head==NULL){ printf("Empty\n"); return;} struct Node* temp=head; while(temp!=NULL){ printf("%d ", temp->data); temp=temp->next; } printf("\n"); }
int main(){ struct Node* head=NULL; insert(&head,10); insert(&head,20); insert(&head,30); display(head); return 0;}

