#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
}*head;
int CreateList(int);
int Display();
int Smallest_and_Largest();
int Search_element();
int main(){
	int N;
	printf("enter the length of the LinkedList::");
	scanf("%d",&N);
	CreateList(N);
	Display();
	Smallest_and_Largest();
	Search_element();
}
int CreateList(int n){
	struct node *temp,*new;
	head = (struct node*) malloc(sizeof(struct node));
	if(head == NULL){
		printf("no memory is allocated for head");
		exit(0);
	}
	int i, val;
	printf("enter the data::");
	scanf("%d",&val);
	head->data = val;
	head->link = NULL;
	temp = head;
	for(i = 2;i<=n;i++){
		new = (struct node *)malloc(sizeof(struct node));
		if(new == NULL){
			printf("No memory is allocated for New");
			exit(0);
		}
		printf("enter the data::");
		scanf("%d",&val);
		new->data = val;
		new->link = NULL;
		temp->link = new;
		temp = temp->link;
	}
}
int Display(){
	struct node *temp;
	temp = head;
	printf("printing the data:\n");
	while(temp!= NULL){
		printf("%d ",temp->data);
		temp = temp->link;
	}
	printf("\n");
}

int Smallest_and_Largest(){
	struct node *temp;
	temp = head;
	int small_term = temp->data;
	int large_term = temp->data;
	temp = temp->link;
	while(temp!=NULL){
		if(small_term > (temp->data)){
			small_term = temp->data;
		}
		else if(large_term < (temp->data)){
			large_term = temp->data;
		}

		temp = temp->link;
	}

	printf("Smallest term ::%d\n", small_term);
	printf("Largest term ::%d\n",large_term);
}
int Search_element(){
	struct node *temp;
	int s_element,c=0;
	temp = head;
	printf("enter the element to search::");
	scanf("%d",&s_element);
	while(temp != NULL){
		if(temp->data == s_element){
			c++;
		}
		
		temp = temp->link;
	}
	if(c){
		printf("Element Found:");
	}
	else{
		printf("not found");
	}

	printf("\n");

}

