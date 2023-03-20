#include <stdio.h>
int Printarray(int [100],int);
int insert_element(int [100],int,int);
int Delete_element(int [100],int,int);
int main(){
	int a[100],i,n,pos,del;
	printf("enter the length of the array:");
	scanf("%d",&n);
	printf("Now enter the elements::\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("\nprinting:::");
	Printarray(a,n);
	printf("\n");
	printf("now position to insert ::\n");
	scanf("%d",&pos);
	insert_element(a,pos,n);
	printf("\n");
	printf("enter the pos to delete::");
	scanf("%d",&del);
	Delete_element(a,del,n);
	//Printarray(a,n);
}

int Printarray(int s[100],int n){
	int i;
	printf("array elements are::\n");
	for(i=0;i<=n;i++){
		printf("%d ",s[i]);
	}
	printf("\n");
}
int insert_element(int s[100],int pos,int n){
	printf("enter the element you want to insert\n");
	int element,i;
	scanf("%d",&element);
	for(i = n-1;i>=pos;i--){
		s[i+1]=s[i];
	}
	s[pos] = element;
	printf("array elements are::\n");
        for(i=0;i<=n;i++){
                printf("%d ",s[i]);
        }
        printf("\n");

}
int Delete_element(int d[100],int del,int n){
	int i;
	for(i=del;i<n-2;i++ ){
                d[i] = d[i+1];
        }
        printf("\n");
	printf("array elements after delete are::\n");
        for(i=0;i<n;i++){
                printf("%d ",d[i]);
        }
}
