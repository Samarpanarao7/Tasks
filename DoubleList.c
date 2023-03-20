#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev, *link;
}*head;

int CreateDoublelinkedlist(int);
int PrintList();
int main(){
	int n;
	printf("welcome how many nodes you want ");
	scanf("%d",&n);
	CreateDoublelinkedlist(n);
	printf("\n");
	printf("printing the list\n");
	PrintList();
}


int CreateDoublelinkedlist(int n){
	struct node *temp, *newNode;
	int i,val;
	printf("enter the first node data: ");
	scanf("%d",&val);
	head =  (struct node *) malloc(sizeof(struct node));
	if(head == NULL){
		printf("no memory");
		exit(0);
	}
	else{
		head->data = val;
		head->prev = NULL;
		head->link = NULL;
	}
	temp = head;
	for(i = 2 ; i <=n ; i++){
		newNode = (struct node *)malloc(sizeof(struct node));
		if(newNode == NULL){
			printf("no memory for newnode");
			exit(0);
		}
		printf("enter the data of %d node:: ",i);
		scanf("%d",&val);
		newNode->data = val;
		newNode->prev = temp;
		newNode->link = NULL;
		temp->link = newNode;
		
		temp = temp->link;
	}
}

int PrintList(){
	struct node *temp;
	temp = head;
	while(temp != NULL)
        {
                printf("%d\n",temp->data);
                temp = temp->link;
        }
}

