#include <stdio.h>

int main(){
	int n1,n2,i,c=0;
	printf("enter number1::");
	scanf("%d",&n1);
	printf("enter number2::");
	scanf("%d",&n2);
	for(i=31;i>=0;i--){
		if((((n1>>i)&1) ^ ((n2>>i)&1)) == 1){
			c++;
		}
	}
	printf("difference in bits:%d\n",c);
	for(i = 31;i>=0;i--){
		printf("%d",(n>>i)&1);
	}
	int p;
	printf("\nenter the position::");
	scanf("%d",&p);
	//to set the particular bit...
	n1 = n1 | (1<<p);
	printf("printing\n");
	for(i = 31;i>=0;i--){
                printf("%d",(n1>>i)&1);
        }

	// toggle the given bit
	printf("\nenter the position::");
        scanf("%d",&p);

	n1 = n1 ^(1<<p);
	printf("toggle\n");
	for(i = 31;i>=0;i--){
                printf("%d",(n1>>i)&1);
        }
	// clear the bit
	printf("\nenter the position::");
        scanf("%d",&p);

	n1 = n1 &(~(1<<p));
	printf("printing clear");
	for(i = 31;i>=0;i--){
                printf("%d",(n1>>i)&1);
        }





}

