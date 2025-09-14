#include <stdio.h>
#define MAX 5
int queue[MAX], front=-1, rear=-1;
void enqueue(int val){ if(rear==MAX-1) printf("Overflow\n"); else{ if(front==-1) front=0; queue[++rear]=val; printf("%d enqueued\n", val);} }
void dequeue(){ if(front==-1||front>rear) printf("Underflow\n"); else printf("%d dequeued\n", queue[front++]); }
void display(){ if(front==-1||front>rear) printf("Empty\n"); else{ for(int i=front;i<=rear;i++) printf("%d ", queue[i]); printf("\n"); } }
int main(){ enqueue(5); enqueue(10); display(); dequeue(); display(); return 0; }

