#include <stdio.h>

int main()
{
	int a[10],i,n,mid,last,first=0,j,temp;
	printf("enter the length::");
	scanf("%d",&n);
	last = n-1;
	printf("now enter the data");
	for(i = 0 ; i < n ; i++){
                scanf("%d",&a[i]);
        }

	printf("\n printing the datai before");
        for(i=0;i<n;i++){
                printf("%d ",a[i]);
        }
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n printing the data\n");
	for(i=0;i<n;i++){
                printf("%d ",a[i]);
        }

	int key,flag=0;
	printf("enter key to sear::\n");
	scanf("%d",&key);
	while(first<last){
		mid = (first+last)/2;
		if(key == a[mid]){
			flag = 1;
			break;
		}
		else if(key < a[mid]){
			last = mid -1;
		}
		else{
			first = mid + 1;
		}
	}

	if(flag){
		printf("\nfound");
	}
	else{
		printf("\nnot\n");
	}

	
}
