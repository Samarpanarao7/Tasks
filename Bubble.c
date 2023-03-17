#include <stdio.h>
int main()
{
	int n,a[100],i,j,k,temp;
	printf("enter the size of the array");
	scanf("%d",&n);
	for(i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j] > a [j+1]){
				temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i = 0; i< n ; i++){
		printf("%d ",a[i]);
	}
}




