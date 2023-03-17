#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
}*head;

int CreatList(int);
int PrintList();
int insertion_atlast();
int insertion_atbegining();
int insert_at_specific();
int delete_beg();
int delete_last();
int delete_specific();
int main()
{

	int n;
	printf("enter how many nodes you want\n");
	scanf("%d",&n);
	CreatList(n);
	printf("the node elements are\n");
	PrintList();

	printf("enter the data to insertion at last::\n");
	insertion_atlast();
	printf("after adding the element at last\n");
	PrintList();
	printf("enter the data to add at first\n");
	insertion_atbegining();
	printf("after insert at first\n");
	PrintList();
	printf("enter the position to insert \n");
	insert_at_specific();
	printf("after insert at specific pos\n");
        PrintList();
	printf("now we are doing delete:\n");
	delete_beg();
	PrintList();
	printf("delete from last\n");
	delete_last();
	PrintList();
	printf("now we are doing deletion from specific\n");
	delete_specific();
	PrintList();

	return 0;
}

int CreatList(int size){

	int val,i;
	struct node *newNode, *temp;
	head = (struct node *) malloc(sizeof(struct node));
	if(head == NULL){
		printf("memory is not allocated for node");
		exit(0);
	}
	printf("enter the 1 node data");
	scanf("%d",&val);
	head->data = val;
	head->link = NULL;
	temp = head;
	for(i=2;i<=size;i++)
	{
		newNode = (struct node *)malloc(sizeof(struct node));
		if(newNode == NULL){
			printf("memory is not allocated for newnode");
			exit(0);
		}
		printf("enter the %d node data",i);
		scanf("%d",&val);

		newNode->data = val;
	       	newNode->link = NULL;
		
		temp->link = newNode;
		temp = temp->link;	
	}

}


int PrintList()
{
	struct node *temp;
	if(head == NULL){
		printf("no data");
		exit(0);
	}
	temp = head;
	while(temp != NULL)
	{
		printf("%d\n",temp->data);
		temp = temp->link;
	}
}

int insertion_atlast(){

	int l;
	printf("enter the element to add\n");
	scanf("%d",&l);
	struct node *last,*end;
	end = (struct node *) malloc(sizeof(struct node));
	if(end == NULL){
		printf("no memory");
		exit(0);
	}
	else{
		end->data = l;
		end->link = NULL;
	}
	last = head;
	while(last->link != NULL)
        {
                //printf("%d",temp->data);
                last = last->link;
        }  
	last->link = end;
}
int insertion_atbegining(){

	int s;
	scanf("%d",&s);
	struct node *first;
	first = (struct node *) malloc(sizeof(struct node));
	if(first == NULL){
		printf("no memory");
		exit(0);
	}
	else{
		first->data = s;
		first->link = head;
		head = first;
	}
}
int insert_at_specific(){

	int pos,a,i=1;
	scanf("%d",&pos);
	struct node *new,*temp;
	printf("enter the data to insert at specific position");
	scanf("%d",&a);
	temp = head;
	new = (struct node *)malloc(sizeof(struct node));
	if(new == NULL)
	{
		printf("no memory");
		exit(0);
	}
	else{
		new->data = a;
		new->link = NULL;
	}

	while(i<(pos-1)){
		temp = temp->link;
		i++;
	}
	new->link = temp->link;
	temp->link = new;
}
int delete_beg()
{
	struct node *temp;
	temp = head;
	head = head->link;
	free(temp);
}

int delete_last()
{
	struct node *previous, *temp;
	temp = head;
	while(temp->link !=NULL){
		previous = temp;
		temp = temp->link;
	}
	if(temp == head){
		head = NULL;
	}
	else{
		previous->link = NULL;
	}
	free(temp);
}

int delete_specific(){
	int i=1,d;
	struct node *next, *temp;
	temp = head;
	printf("eneter the position::");
	scanf("%d", &d);
	while(i<(d-1)){
		temp= temp->link;
		i++;

	}
	next = temp->link;
	temp->link = next->link;
	free(next);
}



