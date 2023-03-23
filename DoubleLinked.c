#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *prev,*link;
}*head,*tail;


int CreateDouble(int );
int Insert_at_beg();
int Insert_at_last();
int Insert_at_specific();
int Delete_at_first();
int Delete_at_last();
int Delete_at_specific();
int Reverse();
int PrintList();
int main(){

	int n;
	printf("enter the length::");
	scanf("%d",&n);
	CreateDouble(n);
	printf("\n");
	Insert_at_beg();
	printf("\n");
	Insert_at_last();
	printf("\n");
	printf("\n");
	Insert_at_specific();
	printf("\n");
	Delete_at_first();
	printf("\n");
	Delete_at_last();
	printf("\n");
	Delete_at_specific();
	printf("\n");

}

int CreateDouble(int n){
	int val,i;
	struct node *temp,*new;
	printf("enter the value::");
	scanf("%d",&val);
	head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL){
		printf("no memory");
		exit(0);
	}
	else{
		head->data = val;
		head->link = NULL;
		head->prev = NULL;
	}
	tail = head;
	for(i=2;i<=n;i++){
		new = (struct node *) malloc(sizeof(struct node));
		if(new == NULL){
			printf("no memory for new");
			exit(0);
		}
		else{
			printf("enter the data");
			scanf("%d",&val);
			new->data = val;
			new->prev = tail;
			new->link = NULL;

			tail->link = new;
			tail = tail->link;
		}
	}
	temp = tail;
        printf("Printing Reverse Double linked list :: %d\n",temp->data);
        while(temp != NULL){
                printf("%d ",temp->data);
                temp = temp->prev;
        }
}



int Insert_at_beg(){
	struct node *in,*temp;
	printf("enter the data add at beginning::");
	int val;
	scanf("%d",&val);
	in = (struct node *)malloc(sizeof(struct node));
	if(in == NULL){
		printf("no memory");
		exit(0);
	}

	in->data = val;
	in->prev = NULL;
	in->link = NULL;


	head->prev = in;
 	in->link = head;
	head = in;

	temp = head;
        while(temp!= NULL){
                printf("%d ",temp->data);
                temp = temp->link;
        }
}
int Insert_at_last(){
	struct node *last,*temp;
	int val;
	printf("enter the data to add last:\n");
	scanf("%d",&val);
	last = (struct node *)malloc(sizeof(struct node));
	if(last == NULL){
		printf("no memory");
		exit(0);
	}
	else{
		last->data = val;
		tail->link = last;
		last->prev = tail;
		last->link = NULL;
		tail = last;
	}
	temp = head;
	printf("printing in the last\n");
	while(temp!= NULL){
                printf("%d ",temp->data);
                temp = temp->link;
        }

}

int Insert_at_specific(){
	int pos,i=1,val;
	struct node *temp,*new,*extra,*temp1;
	printf("enter the position ::");
	scanf("%d",&pos);
	printf("Now enter the data to add at %d position::",pos);
	scanf("%d",&val);
	new = (struct node *)malloc(sizeof(struct node));
	if(new == NULL){
		printf("no memory");
		exit(0);
	}
	new->data = val;
	new->prev = NULL;
	new->link = NULL;
	temp = head;
	while(i<(pos-1)){
		temp = temp->link;
		i++;
	}
	extra = temp->link;
	temp->link = new;
	new->prev = temp;
	new->link = extra;
	extra->prev = new;


	temp1 = head;
	printf("Printing the list after add at specific::\n");
	while(temp1!= NULL){
                printf("%d ",temp1->data);
                temp1 = temp1->link;
        }

}



int Delete_at_first()

{
	struct node *temp,*temp1;
	temp = head;
	head = head->link;
	head->prev = NULL;
	free(temp);
	 temp1 = head;
	 printf("printing the data after first element delete::\n");
        while(temp1!= NULL){
                printf("%d ",temp1->data);
                temp1 = temp1->link;
        }


}

int Delete_at_last(){
	struct node *temp,*temp1,*extra;
	printf("\nlast node is ::%d \n",tail->data);
	temp = tail;
	extra = temp->prev;
	extra->link = NULL;
	tail = extra;
	//tail->previous = NULL;
	free(temp);
	 temp1 = head;
	 printf("printing the data after delete at last::\n");
        while(temp1!= NULL){
                printf("%d ",temp1->data);
                temp1 = temp1->link;
        }
}

int Delete_at_specific(){

	int pos,i=1;
	printf("enter the position to delete::");
	scanf("%d",&pos);

	struct node *temp,*temp1,*extra;
	temp = head;
	if(pos == 1)
	{
		head = head->link;
	        head->prev = NULL;
       		 free(temp);

	}
	else{
		while(i<(pos-1)){
			temp = temp->link;
			i++;

		}	
		extra = temp->link;
		temp->link = extra->link;
		free(extra);
	}
	temp1 = head;
	printf("\nafter delete ::");
	while(temp1 != NULL){
		printf("%d ",temp1->data);
		temp1 = temp1->link;
	}

}
