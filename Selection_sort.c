#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i,j,temp;
	printf("enter the length of the array");
	scanf("%d",&n);
	int *arr = (int *) malloc(sizeof(int)*n);
	printf("enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	printf("\n");
	printf("now the data is::\n");
	for(i =0;i<n; i++){
		printf("%d ",*(arr+i));
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*(arr+i) > *(arr+j)){
				temp = *(arr+i);
				*(arr+i) = *(arr+j);
				*(arr+j) = temp;
			}
		}
	}
	printf("\n");
	printf("now the data in sorting::\n");
        for(i =0;i<n; i++){
                printf("%d ",*(arr+i));
        }
}
