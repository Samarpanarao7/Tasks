#include <stdio.h>
#include <stdlib.h>
#define N 5

int top = -1;
int stack[N];

int push();
int pop();
int peek();
int display();

int main(){
	int choice;
	do{
		printf("enter the choice:\n1.Push\n2.Display\n3.Peek\n4.Pop\n5.Exit\n");
		scanf("%d",&choice);

	switch(choice){
		case 1:
			push();
			break;
		case 2:
			display();
			break;
		case 3:
			peek();
			break;
		case 4:
			pop();
			break;
		case 5:
			printf("Exiting\n");
			exit(0);
		default:
			printf("enter a valid choice:\n");
	}
	}while(choice!=5);
	return 0;
}

int push(){
	printf("enter the data:");
	int data;
	scanf("%d",&data);
	if(top >= N-1){
		printf("Overflow::Stack is full.\n");
		return 0;
	}
	else{
		top++;
		stack[top] = data;
	}
}
int display(){
	if(top == -1){
		printf("Underflow::\n");
		return 0;
	}
	else{
		int i;
		printf("printing the data in the stack::");
		for(i = top ; i>=0 ; i--){
			printf("%d ",stack[i]);
		}
	printf("\n");		
	}
}
int peek(){
	if(top == -1){
		printf("underflow::\n");
		return 0;
	}
	else{
		printf("\n%d\n",stack[top]);
	}
}

int pop(){
	int item;
	if(top == -1){
		printf("underflow::\n");
		return 0;
	}
	else{
		item = stack[top];
		top--;
		printf("%d",item);
	}
}

