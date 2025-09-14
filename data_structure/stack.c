#include <stdio.h>
#define MAX 5
int stack[MAX], top=-1;
void push(int val){ if(top==MAX-1) printf("Overflow\n"); else stack[++top]=val; }
void pop(){ if(top==-1) printf("Underflow\n"); else printf("%d popped\n", stack[top--]); }
void display(){ if(top==-1) printf("Empty\n"); else { for(int i=0;i<=top;i++) printf("%d ",stack[i]); printf("\n"); } }
int main(){ push(10); push(20); display(); pop(); display(); return 0; }

